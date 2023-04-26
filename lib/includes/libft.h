/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   libft.h                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vsozonof <vsozonof@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/31 22:14:34 by vsozonoff         #+#    #+#             */
/*   Updated: 2023/04/20 13:26:22 by vsozonof         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef LIBFT_H
# define LIBFT_H
# include <bsd/string.h>
# include <stdlib.h>
# include <limits.h>
# include <stddef.h>
# include <stdint.h>
# include <stdio.h>
# include <ctype.h>
# include <string.h>
# include <strings.h>
# include <unistd.h>
# include <stdarg.h>
# include <fcntl.h>

// LIBFT Functions
int		ft_isdigit(int c);
int		ft_is_str_digit(char *str);
int		ft_isascii(int c);
int		ft_isalpha(int c);
int		ft_isalnum(int c);
int		ft_isprint(int c);
int		ft_isminus(char c);
int		ft_tolower(int c);
int		ft_toupper(int c);
int		ft_atoi(const char *str);
int		ft_memcmp(const void *s1, const void *s2, size_t n);
int		ft_strncmp(const char *s1, const char *s2, size_t n);
int		ft_int_overflow_checker(char *str);
int		ft_integer_checker(char *str);
int		ft_is_whitespace(char c);
void	*ft_memcpy(void *dest, const void *src, size_t n);
void	*ft_memset(void *s, int c, size_t n);
void	*ft_memmove(void *dest, const void *src, size_t n);
void	*ft_memchr(const void *s, int c, size_t n);
void	*ft_calloc(size_t nmemb, size_t size);
void	ft_bzero(void *s, size_t n);
void	ft_bzero(void *s, size_t n);
void	ft_putchar_fd(char c, int fd);
void	ft_putnbr_fd(int n, int fd);
void	ft_putstr_fd(char *s, int fd);
int		ft_split_free(char **str);
int		pr_error(char *error);
void	ft_putendl_fd(char *s, int fd);
void	ft_striteri(char *s, void (*f)(unsigned int, char*));
char	*ft_strmapi(char const *s, char (*f)(unsigned int, char));
char	*ft_itoa(int n);
char	*ft_strjoin(char const *s1, char const *s2);
char	*ft_strchr(const char *s, int c);
char	*ft_strrchr(const char *s, int c);
char	*ft_strnstr(const char *s1, const char *s2, size_t len);
char	*ft_strdup(const char *s);
char	*ft_substr(char const *s, unsigned int start, size_t len);
char	*ft_strtrim(char const *s1, char const *set);
char	**ft_split(char const *s, char c);
size_t	ft_strlen(const char *str);
size_t	ft_strlcpy(char *dest, const char *src, size_t size);
size_t	ft_strlcat(char *dst, const char *src, size_t size);
long	ft_atol(const char *str);

typedef struct s_lst
{
	void				*content;
	int					data;
	struct s_lst		*next;
}						t_lst;

t_lst	*ft_lstnew(void *content);
t_lst	*ft_lstlast(t_lst *lst);
t_lst	*ft_lstmap(t_lst *lst, void *(*f)(void *), void (*del)(void *));
void	ft_lstdelone(t_lst *lst, void (*del)(void *));
void	ft_lstclear(t_lst **lst, void (*del)(void *));
void	ft_lstiter(t_lst *lst, void (*f)(void *));
void	ft_lstadd_front(t_lst **lst, t_lst *new);
void	ft_lstadd_back(t_lst **lst, t_lst *new);
int		ft_lstsize(t_lst *lst);

// PRINTF Functions
int		ft_printf(const char *str, ...);
void	ft_putstr(char *s);
void	ft_putnbr(long int n);
void	ft_putchar(char c);
void	ft_base_checker(unsigned long int nb, char c);
void	ft_putnbr_hexa(unsigned long int nb, char *base);
void	ft_pointer_converter(void *p);

// GET NEXT LINE Functions
# ifndef BUFFER_SIZE
#  define BUFFER_SIZE 1
# endif

char	*get_next_line(int fd);
char	*read_and_fill_stash(int fd, char *stash);
char	*extract_from_stash(char *stash);
char	*get_line(char *stash);
char	*ft_strjoin_gnl(char const *s1, char const *s2);
char	*free_and_join_stash(char *stash, char *tmp);
char	*ft_substr_gnl(char *s, unsigned int start, size_t len);
size_t	ft_strlen_gnl(const char *str);
int		ft_find_newline(char *s);
char	*ft_strdup_gnl(const char *s);

#endif