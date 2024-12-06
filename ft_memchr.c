/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hceviz <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/03 16:01:45 by hceviz            #+#    #+#             */
/*   Updated: 2024/12/03 16:47:37 by hceviz           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
//#include <stdio.h>
//#include <string.h>

void	*ft_memchr(const void *s, int c, size_t n)
{
	unsigned char	*ptr;
	unsigned char	chr;

	chr = (unsigned char)c;
	ptr = (unsigned char *)s;
	if (!s)
		return (NULL);
	while (n > 0)
	{
		if (*ptr == chr)
			return ((char *)ptr);
		ptr++;
		n--;
	}
	return (NULL);
}
/*
int	main(void)
{
	const char 	a[] = "Hasan";
	int			c = 97;
	size_t		n = 3;

	printf("First occurance of '%c' within '%d' bytes in Hasan\nORIGINAL: %s\n",
	(char)c, (int)n, (char *)memchr(a, c, n));
	printf("FAKE: %s", (char *)ft_memchr(a, c, n));
	return 1;
}*/
