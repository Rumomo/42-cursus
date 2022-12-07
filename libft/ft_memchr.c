/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rmora-es <rmora-es@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/04 11:13:25 by rmora-es          #+#    #+#             */
/*   Updated: 2022/12/06 23:15:17 by rmora-es         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memchr(const void *s, int c, size_t n)
{
	unsigned char	*src;
	unsigned char	charac;
	size_t			count;

	src = (unsigned char *)s;
	charac = (unsigned char)c;
	count = 0;
	while (count < n)
	{
		if (src[count] == charac)
			return ((void *)&src[count]);
		count++;
	}
	return (NULL);
}
