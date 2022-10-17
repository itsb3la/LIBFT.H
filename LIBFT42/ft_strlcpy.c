/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alnavarr <alnavarr@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/22 11:11:35 by alnavarr          #+#    #+#             */
/*   Updated: 2022/09/26 11:03:30 by alnavarr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcpy(char *dst, const char *src, size_t dstsize)
{
	size_t	ind;
	size_t	count;

	ind = 0;
	count = 0;
	while (src[ind] != '\0')
			ind++;
	if (dstsize != 0)
	{
		while (src[count] != '\0' && count < (dstsize - 1))
		{
			dst[count] = src[count];
			count++;
		}
			dst[count] = '\0';
	}
	return (ind);
}
