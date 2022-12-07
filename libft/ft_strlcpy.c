/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rmora-es <rmora-es@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/03 21:54:08 by rmora-es          #+#    #+#             */
/*   Updated: 2022/12/06 23:09:19 by rmora-es         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcpy(char *dst, const char *src, size_t dstsize)
{
	size_t			count;
	unsigned int	point;

	count = ft_strlen(src);
	if (!dstsize)
		return (count);
	point = 0;
	while (src[point] && point < dstsize - 1)
	{
		dst[point] = src[point];
		point++;
	}
	dst[point] = '\0';
	return (count);
}
