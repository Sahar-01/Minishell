#ifndef TOKEN_H
# define TOKEN_H

typedef enum e_token_type
{
	T_WORD,		// Word
	T_PIPE,		// |
	T_AND_IF,	// &&
	T_OR_IF,	// ||
	T_REDIR_IN,	// <
	T_REDIR_OUT,	// >
	T_REDIR_APPEND,	// <<
	T_HEREDOC,	// >>
	T_LPARAN,	// (
	T_RPARAN,	// )
}	t_token_type;

// Linked list of my tokens
typedef struct s_token
{
	char		*value;
	t_token_type	type;
	struct s_token	*next;
}	t_token;
#endif
