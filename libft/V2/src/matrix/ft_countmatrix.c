/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_countmatrix.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pyago_ra <yagosousa2512@gmail.com>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/17 11:13:03 by pyago_ra          #+#    #+#             */
/*   Updated: 2022/02/17 11:17:59 by pyago_ra         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

ULONGLONG	ft_count_matrix(void **matrix)
{
	ULONGLONG	size;

	size = 0;
	while (matrix && (*matrix))
	{
		size++;
		matrix++;
	}
	return (size);
}
