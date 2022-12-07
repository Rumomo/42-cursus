/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rmora-es <rmora-es@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/04 11:18:09 by rmora-es          #+#    #+#             */
/*   Updated: 2022/12/06 23:16:56 by rmora-es         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_memcmp(const void *s1, const void *s2, size_t n)
{
	unsigned int	count;

	count = 0;
	while (count < n)
	{
		if (((const unsigned char *)s1)[count] != \
		((const unsigned char *)s2)[count])
			return (((const unsigned char *)s1)[count] \
			- ((const unsigned char *)s2)[count]);
		count++;
	}
	return (0);
}
