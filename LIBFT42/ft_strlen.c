/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlen.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alnavarr <alnavarr@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/19 11:18:55 by alnavarr          #+#    #+#             */
/*   Updated: 2022/09/23 10:50:49 by alnavarr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
//#include <stdio.h>
//#include <string.h>

size_t	ft_strlen(const char *s)
{
	size_t	u;

	u = 0;
	while (s[u])
			u++;
	return (u);
}

/*int	main(void)
{
	printf("%zu\n", ft_strlen("1"));
	return(0);
}*/
