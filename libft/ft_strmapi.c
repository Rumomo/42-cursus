/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmapi.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rmora-es <rmora-es@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/06 21:54:01 by rmora-es          #+#    #+#             */
/*   Updated: 2022/12/06 23:09:27 by rmora-es         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strmapi(char const *s, char (*f)(unsigned int, char))
{
	char			*output;
	unsigned int	point;

	if (!s || (!s && !f))
		return (ft_strdup(""));
	if (!f)
		return (ft_strdup(s));
	output = ft_strdup(s);
	if (!output)
		return (0);
	point = 0;
	while (output[point])
	{
		output[point] = (*f)(point, output[point]);
		point++;
	}
	return (output);
}
