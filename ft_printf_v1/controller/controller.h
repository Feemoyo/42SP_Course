/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   controller.h                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pyago-ra <pyago-ra@student.42sp.org.br     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/28 17:53:26 by pyago-ra          #+#    #+#             */
/*   Updated: 2021/08/28 17:56:35 by pyago-ra         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CONTROLLER_H
# define CONTROLLER_H

# ifndef CONTROL
#  define CONTROL '%'
# endif

# include <stdlib.h>
# include <unistd.h>
# include <stdarg.h>
# include "../utils/utils.h"
# include "./formats/formats.h"

typedef struct s_controller
{
	unsigned char	can_left_justify;
	unsigned char	can_show_signal;
	unsigned char	can_show_prefix;
	unsigned char	can_fill_space;
	unsigned char	can_fill_zero;
	unsigned char	to_abort;
	const char		*control;
	char			format;
	char			*text;
	size_t			size;
	size_t			width;
	size_t			precision;
}	t_controller;

t_controller	new_controller(const char *control);
void			print_controller(t_controller *controller,
					va_list ap, size_t *c);

#endif