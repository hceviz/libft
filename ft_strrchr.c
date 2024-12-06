/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hceviz <hceviz@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/01 16:59:27 by hceviz            #+#    #+#             */
/*   Updated: 2024/12/06 11:17:18 by hceviz           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

//#include <stddef.h>
char	*ft_strrchr(const char *s, int c)
{
	int	x;

	x = 0;
	while (s[x])
		x++;
	while (x >= 0)
	{
		if (s[x] == (char)c)
			return ((char *)(s + x));
		x--;
	}
	return (0);
}
/*
#include <stdio.h>
int	main(void)
{
	const char	*s = "Hasan";
	char		*res = ft_strrchr(s, 97);

	printf("%s", res);
	return 1;
}*/