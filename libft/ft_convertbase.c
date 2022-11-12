/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_convertbase.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dgoubin <dgoubin@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/31 12:50:07 by dgoubin           #+#    #+#             */
/*   Updated: 2022/11/12 20:15:42 by dgoubin          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_convertbase(unsigned long nbr, char *base_to)
{
	int	cpt;

	cpt = 0;
	if (nbr >= 16)
	{
		cpt = ft_convertbase(nbr / 16, base_to);
		if (cpt == -1)
			return (-1);
	}
	if (ft_putchar_fd(base_to[nbr % 16], 1) == -1)
		return (-1);
	return (cpt + 1);
}
