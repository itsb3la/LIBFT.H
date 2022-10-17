/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isalnum.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alnavarr <alnavarr@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/19 12:42:35 by alnavarr          #+#    #+#             */
/*   Updated: 2022/09/23 10:52:46 by alnavarr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//#include <stdio.h>
#include "libft.h"

int	ft_isalnum(int c)
{
	if ((c >= 'a' && c <= 'z') || (c >= '0' && c <= '9')
		|| (c >= 'A' && c <= 'Z'))
	{
		return (1);
	}
	return (0);
}

/*
int main()
{
	printf("%d\n", ft_isalnum ('a'));
	printf("%d\n", ft_isalnum ('Z'));
	printf("%d\n", ft_isalnum ('z'));
}*/
