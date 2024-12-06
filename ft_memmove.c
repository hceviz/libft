/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hceviz <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/01 11:48:30 by hceviz            #+#    #+#             */
/*   Updated: 2024/12/04 14:23:56 by hceviz           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
//#include <stdio.h>
//#include <string.h>

void	*ft_memmove(void *dest, const void *src, size_t n)
{
	char	*s;
	char	*d;
	size_t	i;

	s = (char *)src;
	d = (char *)dest;
	i = 0;
	if (d > s)
	{
		while (n-- > 0)
			d[n] = s[n];
	}
	else
	{
		while (i < n)
		{
			d[i] = s[i];
			i++;
		}
	}
	return (dest);
}
/*
int	main(void)
{
	char	s[] = {65, 66, 67, 68, 69, 0, 45};
	char	s0[] = { 0,  0,  0,  0,  0,  0, 0};
	char	sCpy[] = {65, 66, 67, 68, 69, 0, 45};
	char	Sresult[] = {67, 68, 67, 68, 69, 0, 45};
	char sResult2[] = {67, 67, 68, 68, 69, 0, 45};

	//Forward copy (when dst <= source)
	memmove(s0, s, 7);
	int	mem1 = memcmp(s, s0, 7);
	printf("Original: %s\nMemcompare : %d\n", s0, mem1);
	ft_memmove(s0, s, 7);
	printf("Fake: %s\nMemcompare : %d\n", s0, mem1);
	//Backward copy (when dst > source)
	memmove(s, s+2, 2);
	int	mem2 = memcmp(s, Sresult, 7);
    printf("Original: %s\nMemcompare : %d\n", s, mem2);
    ft_memmove(s, s+2, 2);
    printf("Fake: %s\nMemcompare %d\n:", s, mem2);
	return 1;
}*/
