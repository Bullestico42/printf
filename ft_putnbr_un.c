/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_un.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: apiscopo <apiscopo@student.42lausanne.c    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/17 02:03:07 by apiscopo          #+#    #+#             */
/*   Updated: 2024/10/17 02:39:01 by apiscopo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

ssize_t	ft_putnbr_un(unsigned int n)
{
	char	c;
	int		count;

	count = 0;
	if (n == 2147483647)
	{
		write(1, "2147483647", 10);
		return (10);
	}
	if (n < 0)
	{
		n = -n;
	}
	if (n > 9)
	{
		count += ft_putnbr_un(n / 10);
	}
	c = (n % 10) + '0';
	count += write(1, &c, 1);
	return (count);
}
