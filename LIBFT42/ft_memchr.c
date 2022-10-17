/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alnavarr <alnavarr@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/21 09:30:34 by alnavarr          #+#    #+#             */
/*   Updated: 2022/09/26 11:05:50 by alnavarr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
//#include <stdio.h>

void	*ft_memchr(const void *s, int c, size_t n)
{
	size_t	ind;

	ind = 0;
	while (ind < n)
	{
		if (((unsigned char *)s)[ind] == (unsigned char)c)
			return (((unsigned char *)s) + ind);
		ind++;
	}
	return (NULL);
}
