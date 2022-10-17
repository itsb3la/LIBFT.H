/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alnavarr <alnavarr@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/21 09:07:58 by alnavarr          #+#    #+#             */
/*   Updated: 2022/09/23 10:01:56 by alnavarr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
//#include <stdio.h>

void	*ft_memset(void *b, int c, size_t n)
{
	size_t	ind;

	ind = 0;
	while (ind < n)
	{
		((unsigned char *)b)[ind] = c;
		ind++;
	}
	return (b);
}
