/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_fd.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dgoubin <dgoubin@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/01 19:12:42 by dgoubin           #+#    #+#             */
/*   Updated: 2022/11/12 20:13:37 by dgoubin          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_putnbr_fd(int n)
{
	if (n == -2147483648)
		return (ft_putstr_fd("-2147483648", 1));
	if (n < 0)
	{
		n = -n;
		if (ft_putchar_fd('-', 1) == -1)
			return (-1);
	}
	if (n >= 10)
	{
		if (ft_putnbr_fd(n / 10) == -1)
			return (-1);
	}
	return (ft_putchar_fd((n % 10) + '0', 1));
}

int	ft_putnbr_ui_fd(unsigned int n)
{
	if (n >= 10)
	{
		if (ft_putnbr_fd(n / 10) == -1)
			return (-1);
	}
	return (ft_putchar_fd((n % 10) + '0', 1));
}
