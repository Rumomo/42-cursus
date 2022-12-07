/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rmora-es <rmora-es@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/05 18:45:51 by rmora-es          #+#    #+#             */
/*   Updated: 2022/12/06 23:06:12 by rmora-es         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_calloc(size_t count, size_t size)
{
	void	*c;
	size_t	x;

	x = count * size;
	if (count != 0 && x / count != size)
		return (NULL);
	c = (void *)malloc(count * size);
	if (c)
		ft_memset(c, 0, count * size);
	return (c);
}
