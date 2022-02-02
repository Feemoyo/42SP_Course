/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   utils.h                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pyago-ra <pyago-ra@student.42sp.org.br     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/28 17:52:56 by pyago-ra          #+#    #+#             */
/*   Updated: 2021/08/28 17:52:58 by pyago-ra         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef UTILS_H
# define UTILS_H

# include <stdlib.h>
# include <unistd.h>

char	*ft_itoa(int n);
int		ft_isdigit(int c);
size_t	ft_strlen(const char *s);
void	ft_bzero(void *s, size_t n);
void	ft_putstr_fd(char *s, int fd);
void	ft_putchar_fd(char c, int fd);
void	*ft_memset(void *s, int c, size_t n);
void	*ft_calloc(size_t nmemb, size_t size);

#endif