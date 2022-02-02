/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   format.h                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pyago-ra <pyago-ra@student.42sp.org.br     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/28 17:53:34 by pyago-ra          #+#    #+#             */
/*   Updated: 2021/08/28 17:53:34 by pyago-ra         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FORMAT_H
# define FORMAT_H

# ifndef FORMAT_COUNT
#  define FORMAT_COUNT 9
# endif

# include "controller.h"
# include "../utils/utils.h"

void	get_format(t_controller *controller, size_t *index);

#endif