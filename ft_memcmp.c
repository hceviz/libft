/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hceviz <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/03 16:56:13 by hceviz            #+#    #+#             */
/*   Updated: 2024/12/03 17:48:59 by hceviz           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
//#include <string.h>
//#include <stdio.h>
// line 25 is for segmentation fault case

int	ft_memcmp(const void *s1, const void *s2, size_t n)
{
	unsigned char	*s_1;
	unsigned char	*s_2;

	s_1 = (unsigned char *)s1;
	s_2 = (unsigned char *)s2;
	if (!s1 || !s2)
		return (0);
	while (n > 0)
	{
		if (*s_1 != *s_2)
			return (*s_1 - *s_2);
		s_1++;
		s_2++;
		n--;
	}
	return (0);
}
/*
int	main(void)
{
	const char 	*s1 = "Hasan";
	const char 	*s2 = "hasan";
	size_t		n = 5;

	printf("ORIGINAL: %d\n", memcmp(s1, s2, n));
	printf("FAKE: %d", ft_memcmp(s1, s2, n));
	return (1);
}*/
