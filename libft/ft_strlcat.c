/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nvillalt <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/25 17:55:46 by nvillalt          #+#    #+#             */
/*   Updated: 2023/10/03 09:38:14 by nvillalt         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcat(char *dst, const char *src, size_t size)
{
	size_t	dstsize;
	size_t	srcsize;
	size_t	i;

	dstsize = ft_strlen(dst);
	srcsize = ft_strlen(src);
	i = 0;
	if (dst == 0 && size == 0)
		return (size + srcsize);
	if (size > dstsize)
	{
		while (*src != 0 && i < (size - dstsize -1))
		{
			dst[dstsize + i] = *src;
			src++;
			i++;
		}
		dst[dstsize + i] = 0;
		return (dstsize + srcsize);
	}
	else
		return (size + srcsize);
}
