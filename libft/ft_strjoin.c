/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rmora-es <rmora-es@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/06 11:52:00 by rmora-es          #+#    #+#             */
/*   Updated: 2022/12/06 23:09:05 by rmora-es         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strjoin(char const *s1, char const *s2)
{
	char			*output;
	unsigned int	point;

	output = (char *)malloc(\
			(ft_strlen(s1) + ft_strlen(s2) + 1) \
			* sizeof(char));
	if (!output)
		return (NULL);
	point = 0;
	while (*s1)
		output[point++] = *s1++;
	while (*s2)
		output[point++] = *s2++;
	output[point] = '\0';
	return (output);
}
