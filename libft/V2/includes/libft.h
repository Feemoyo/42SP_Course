/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   libft.h                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pyago_ra <yagosousa2512@gmail.com>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/29 02:58:26 by pyago-ra          #+#    #+#             */
/*   Updated: 2022/03/29 12:43:43 by pyago_ra         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef LIBFT_H
# define LIBFT_H

# ifndef TRUE
#  define TRUE 1
# endif
# ifndef FALSE
#  define FALSE 0
# endif
# ifndef LOWER_UPPER_DIFF
#  define LOWER_UPPER_DIFF 32
# endif
# ifndef UINT
#  define UINT unsigned int
# endif
# ifndef ULONG
#  define ULONG unsigned long
# endif
# ifndef ULONGLONG
#  define ULONGLONG unsigned long long
# endif
# ifndef INT_SIZE_MAX
#  define INT_SIZE_MAX 2147483647
# endif
# ifndef INT_SIZE_MIN
#  define INT_SIZE_MIN -2147483648
# endif
# ifndef ULONGLONG_MAX
#  define ULONGLONG_MAX 18446744073709551615ULL
# endif

typedef struct s_string
{
	unsigned char	*prt;
	unsigned long	len;
}	t_string;

char		*ft_itoa(int n);
int			ft_islower(int c);
int			ft_isupper(int c);
int			ft_isalpha(int c);
int			ft_isdigit(int c);
int			ft_isalnum(int c);
int			ft_isascii(int c);
int			ft_isprint(int c);
int			ft_toupper(int c);
int			ft_tolower(int c);
void		ft_putnbr_fd(int n, int fd);
ULONGLONG	ft_strlen(const char *s);
char		*ft_strdup(const char *s);
void		ft_putchar_fd(char c, int fd);
void		ft_putstr_fd(char *s, int fd);
void		ft_putendl_fd(char *s, int fd);
int			ft_atoi(const char *nptr);
void		ft_bzero(void *s, ULONGLONG n);
char		ft_strcmp(char *s1, char *s2);
ULONGLONG	ft_count_matrix(void **matrix);
void		ft_clear_matrix(void ***matrix);
char		*ft_strchr(const char *s, int c);
char		*ft_strrchr(const char *s, int c);
char		**ft_split(char const *s, char c);
void		**ft_creatematrix(ULONGLONG __sizeof);
char		*ft_strcatchr(char *src, char new_str);
void		*ft_memset(void *s, int c, ULONGLONG n);
void		*ft_calloc(ULONGLONG nmemb, ULONGLONG size);
char		*ft_substrstr(char *start, char *end);
void		**ft_addmatrix(void **matrix, void *line);
void		*ft_memchr(const void *s, int c, ULONGLONG n);
char		*ft_strjoin(char const *s1, char const *s2);
char		*ft_strtrim(char const *s1, char const *set);
char		*ft_replace(char *src, char *old, char *new_str);
void		*ft_memcpy(void *dest, const void *src, ULONGLONG n);
void		*ft_memmove(void *dest, const void *src, ULONGLONG n);
ULONGLONG	ft_strlcpy(char *dst, const char *src, ULONGLONG size);
ULONGLONG	ft_strlcat(char *dst, const char *src, ULONGLONG size);
int			ft_strncmp(const char *s1, const char *s2, ULONGLONG n);
int			ft_memcmp(const void *s1, const void *s2, ULONGLONG n);
void		*ft_memccpy(void *dest, const void *src, int c, ULONGLONG n);
char		*ft_strmapi(char const *s, char (*f)(UINT, char));
char		*ft_substr(char const *s, UINT start, ULONGLONG len);
char		*ft_strnstr(const char *big, const char *little, ULONGLONG len);
char		*ft_nreplace(char *_src, char *_old, char *_new, ULONGLONG steps);

#endif