/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   system_perro.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: user42 <user42@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/20 12:26:50 by user42            #+#    #+#             */
/*   Updated: 2021/10/20 12:29:41 by user42           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "system.h"

void	system_perro(void)
{
	perror(HEADER);
	system_get()->have_error = 1;
	system_get()->exit();
}