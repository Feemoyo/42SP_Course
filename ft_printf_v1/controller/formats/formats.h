/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   formats.h                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pyago-ra <pyago-ra@student.42sp.org.br     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/28 17:53:47 by pyago-ra          #+#    #+#             */
/*   Updated: 2021/08/28 17:54:14 by pyago-ra         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FORMATS_H
# define FORMATS_H

# include <stdarg.h>
# include <unistd.h>
# include "../../utils/utils.h"

void	print_string(va_list ap, size_t *c);
void	print_number(va_list ap, size_t *c);
void	print_caractere(va_list ap, size_t *c);
void	print_p_hexadecimal(va_list ap, size_t *c);
void	print_x_hexadecimal(va_list ap, size_t *c);
void	print_upper_hexadecimal(va_list ap, size_t *c);
void	print_unsigned_number(va_list ap, size_t *c);
char	*add_digit(char *text, char digit);
char	*long_long_to_hex(unsigned long long value);
char	*long_to_hex(unsigned long value);
char	*int_to_hex(unsigned int value);

#endif