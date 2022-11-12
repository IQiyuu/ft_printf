/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dgoubin <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/31 13:14:52 by dgoubin           #+#    #+#             */
/*   Updated: 2022/11/04 18:06:38 by dgoubin          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"

size_t	ft_strlcpy(char *dest, const char *src, size_t size)
{
	int		src_size;

	src_size = ft_strlen(src);
	if (size == 0)
		return (src_size);
	while (--size > 0 && *src)
		*(dest++) = *(src++);
	*dest = 0;
	return (src_size);
}
