/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   flag.h                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pyago-ra <pyago-ra@student.42sp.org.br     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/28 17:53:29 by pyago-ra          #+#    #+#             */
/*   Updated: 2021/08/28 17:53:36 by pyago-ra         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FLAG_H
# define FLAG_H

# ifndef FLAG_COUNT
#  define FLAG_COUNT 6
# endif

# include "controller.h"
# include "../utils/utils.h"

void	get_flag(t_controller *controller, size_t *index);

#endif