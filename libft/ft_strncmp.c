/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dgoubin <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/31 17:24:10 by dgoubin           #+#    #+#             */
/*   Updated: 2022/11/03 02:06:42 by dgoubin          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"

int	ft_strncmp(const char *first, const char *second, size_t length)
{
	unsigned char	first2;
	unsigned char	second2;

	if (length == 0)
		return (0);
	while (length-- > 0)
	{
		first2 = *(unsigned char *)first++;
		second2 = *(unsigned char *)second++;
		if (first2 != second2)
			return (first2 - second2);
		if (!first2 || !second2)
			return (0);
	}
	return (0);
}
