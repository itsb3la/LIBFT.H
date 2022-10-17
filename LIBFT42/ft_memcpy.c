/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alnavarr <alnavarr@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/22 09:55:04 by alnavarr          #+#    #+#             */
/*   Updated: 2022/09/23 10:00:30 by alnavarr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memcpy(void *dst, const void *src, size_t n)
{
	size_t	ind;

	if (!dst && !src)
		return (0);
	ind = 0;
	while (ind < n)
	{
		((unsigned char *)dst)[ind] = ((unsigned char *)src)[ind];
		ind++;
	}
	return (dst);
}
