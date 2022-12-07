/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rmora-es <rmora-es@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/04 02:15:59 by rmora-es          #+#    #+#             */
/*   Updated: 2022/12/06 23:23:09 by rmora-es         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcat(char *dst, const char *src, size_t dstsize)
{
	size_t			len_src;
	size_t			len_dst;
	unsigned int	point;

	len_src = ft_strlen(src);
	if (!dstsize)
		return (len_src);
	len_dst = ft_strlen(dst);
	if (dstsize < len_dst)
		return (len_src + dstsize);
	point = 0;
	while (src[point] && point < dstsize - len_dst)
	{
		dst[point + len_dst] = src[point];
		point++;
	}
	if (point == dstsize - len_dst && dstsize > len_dst)
		point--;
	dst[point + len_dst] = '\0';
	return (len_src + len_dst);
}
