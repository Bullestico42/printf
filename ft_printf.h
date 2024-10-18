/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: apiscopo <apiscopo@student.42lausanne.c    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/17 02:30:09 by apiscopo          #+#    #+#             */
/*   Updated: 2024/10/18 17:30:51 by apiscopo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_PRINTF_H
# define FT_PRINTF_H

# include <stdarg.h>
# include <unistd.h>

int		ft_printf(const char *str, ...);

ssize_t	ft_putc(char c);
ssize_t	ft_putnbr(int n);
ssize_t	ft_putstr(char *str);
ssize_t	ft_putptr(void *ptr);
ssize_t	ft_putun(unsigned int n);
ssize_t	ft_puthex(unsigned int n, int index);
ssize_t	convert(const char *str, va_list *args);

/*
         ,MMM8&&&.
    _...MMMMM88&&&&..._
 .::'''MMMMM88&&&&&&'''::.
::     MMMMM88&&&&&&     ::
'::....MMMMM88&&&&&&....::'
   `''''MMMMM88&&&&''''`
         'MMM8&&&'
*/
#endif
