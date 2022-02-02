/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pyago-ra <pyago-ra@student.42sp.org.br     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/28 17:52:30 by pyago-ra          #+#    #+#             */
/*   Updated: 2021/08/28 17:52:31 by pyago-ra         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "utils.h"

void	*ft_calloc(size_t nmemb, size_t size)
{
	void	*output;

	output = malloc(nmemb * size);
	if (output == NULL)
		return (NULL);
	ft_bzero(output, nmemb * size);
	return (output);
}
