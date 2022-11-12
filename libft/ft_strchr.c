/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dgoubin <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/31 17:19:39 by dgoubin           #+#    #+#             */
/*   Updated: 2022/11/04 17:23:11 by dgoubin          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"

char	*ft_strchr(const char *s, int c)
{
	char	*res;

	res = (char *)s;
	while (*res)
		if (*(res++) == (unsigned char)c)
			return (res - 1);
	if (*res == (unsigned char)c)
		return (res);
	return (0);
}
