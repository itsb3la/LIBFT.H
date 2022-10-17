/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alnavarr <alnavarr@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/21 12:14:01 by alnavarr          #+#    #+#             */
/*   Updated: 2022/09/23 11:16:42 by alnavarr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_memcmp(const void *s1, const void *s2, size_t n)
{
	unsigned char	*string1;
	unsigned char	*string2;

	if (n == 0)
		return (0);
	string1 = (unsigned char *)s1;
	string2 = (unsigned char *)s2;
	while ((*string1 == *string2) && n - 1 > 0)
	{
		string1++;
		string2++;
		n--;
	}
	return (*string1 - *string2);
}
