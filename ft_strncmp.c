/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hceviz <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/01 17:37:13 by hceviz            #+#    #+#             */
/*   Updated: 2024/12/01 17:50:52 by hceviz           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
//#include <stddef.h>
int	ft_strncmp(const char *s1, const char *s2, size_t n)
{
	if (n < 1)
		return (0);
	while (*s1 == *s2 && --n && *s1)
	{
		s1++;
		s2++;
	}
	return (*s1 - *s2);
}
/*#include <stdio.h>

int	main(void)
{
	const char	*s1 = "Hasan";
	const char	*s2 = "hasan";

	printf("%d", ft_strncmp(s1, s2, 0));
	return (1);
}*/
