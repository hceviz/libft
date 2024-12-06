/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hceviz <hceviz@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/03 19:40:00 by hceviz            #+#    #+#             */
/*   Updated: 2024/12/05 18:35:26 by hceviz           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//#include <stdlib.h>
//#include <stdio.h>
#include "libft.h"

int	ft_atoi(const char *p)
{
	int		neg;
	long	res;

	res = 0;
	neg = 0;
	while ((*p >= 9 && *p <= 13) || *p == 32)
		p++;
	if (*p == '+' || *p == '-')
	{
		if (*p == '-')
			neg = 1;
		p++;
	}
	while (*p >= 48 && *p <= 57)
	{
		res = (res * 10) + (*p - '0');
		p++;
	}
	if (neg == 1)
		res *= -1;
	return ((int)res);
}
/*
int	main(void)
{
	printf("ORIGINAL");
	printf("\n-23423413adf -> %d", atoi("+ 23423413adf"));
	printf("\nspace-532425sgdfg ->%d", atoi(" -532425sgdfg"));
	printf("\nabc123 -> %d", atoi("abc123"));
	printf("\nFAKE");
	printf("\n-23423413adf -> %d", ft_atoi("+ 23423413adf"));
    printf("\nspace-532425sgdfg ->%d",ft_atoi(" -532425sgdfg"));
    printf("\nabc123 -> %d", ft_atoi("abc123"));
	return 1;
}
*/
