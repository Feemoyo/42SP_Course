/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmapi.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pyago_ra <yagosousa2512@gmail.com>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/26 22:12:57 by pyago-ra          #+#    #+#             */
/*   Updated: 2022/03/29 12:45:57 by pyago_ra         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strmapi(char const *s, char (*f)(UINT, char))
{
	UINT			index;
	ULONGLONG		size_str;
	char			*new_str;

	if (!s || !f)
		return ((void *)0);
	index = 0;
	size_str = ft_strlen(s);
	new_str = (char *)ft_calloc(size_str + 1, 1);
	if (new_str)
	{
		while (*s)
		{
			new_str[index] = f(index, *s);
			index++;
			s++;
		}
	}
	return (new_str);
}
