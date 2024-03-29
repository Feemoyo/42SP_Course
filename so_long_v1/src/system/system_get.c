/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   system_get.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: user42 <user42@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/18 15:45:13 by pyago-ra          #+#    #+#             */
/*   Updated: 2021/10/20 13:04:48 by user42           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "system.h"

t_system	*system_get(void)
{
	static t_system	s;

	if (!s.mlx)
		s.mlx = mlx_init();
	return (&s);
}
