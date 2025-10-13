/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: scheragh <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/21 16:33:38 by scheragh          #+#    #+#             */
/*   Updated: 2025/06/21 16:50:29 by scheragh         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "get_next_line.h"

static char	*extract_line(char *src)
{
	int		i;
	char	*line;

	if (!src || src[0] == '\0')
		return (NULL);
	i = 0;
	while (src[i] && src[i] != '\n')
		i++;
	if (src[i] == '\n')
		i++;
	line = ft_substr(src, 0, i);
	return (line);
}

static char	*clean_rem(char *src)
{
	int		i;
	char	*rem;

	i = 0;
	while (src[i] && src[i] != '\n')
		i++;
	if (!src[i])
	{
		free(src);
		return (NULL);
	}
	rem = ft_substr(src, i + 1, ft_strlen(src + i + 1));
	free(src);
	return (rem);
}

static char	*read_save(int fd, char *rem)
{
	char	*buf;
	char	*tmp;
	int		bytes;

	buf = malloc((BUFFER_SIZE + 1) * sizeof(char));
	if (!buf)
		return (NULL);
	bytes = 1;
	while (!ft_strchr(rem, '\n') && bytes > 0)
	{
		bytes = read(fd, buf, BUFFER_SIZE);
		if (bytes < 0)
		{
			free(buf);
			return (NULL);
		}
		buf[bytes] = '\0';
		tmp = ft_strjoin(rem, buf);
		free(rem);
		rem = tmp;
	}
	free(buf);
	return (rem);
}

char	*get_next_line(int fd)
{
	static char	*rem[FD_SIZE];
	char		*line;

	if (fd < 0 || BUFFER_SIZE <= 0 || fd >= FD_SIZE)
		return (NULL);
	rem[fd] = read_save(fd, rem[fd]);
	if (!rem[fd])
		return (NULL);
	line = extract_line(rem[fd]);
	rem[fd] = clean_rem(rem[fd]);
	return (line);
}
