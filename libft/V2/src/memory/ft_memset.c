/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pyago_ra <yagosousa2512@gmail.com>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/15 11:00:01 by pyago-ra          #+#    #+#             */
/*   Updated: 2022/02/03 04:42:01 by pyago_ra         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memset(void *s, int c, ULONGLONG n)
{
	char	*str;

	str = (char *)s;
	while (n-- > 0)
		*(str++) = (c % 256);
	return (s);
}