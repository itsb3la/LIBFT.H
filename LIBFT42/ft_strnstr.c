/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alnavarr <alnavarr@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/22 13:23:07 by alnavarr          #+#    #+#             */
/*   Updated: 2022/09/26 11:03:28 by alnavarr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(const char *haystack, const char *needle, size_t len)
{
	size_t	index;
	size_t	j;

	index = 0;
	if (needle[0] == '\0')
		return ((char *)haystack);
	while (haystack[index] != '\0')
	{
		j = 0;
		while (haystack[index + j] == needle[j] && (index + j) < len)
		{
			if (haystack[index + j] == '\0' && needle[j] == '\0')
				return ((char *)&haystack[index]);
			j++;
		}
		if (needle[j] == '\0')
			return ((char *)haystack + index);
		index++;
	}
	return (0);
}
