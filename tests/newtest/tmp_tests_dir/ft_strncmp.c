/******************************************************************************/
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hceviz <hceviz@student.42warsaw.pl>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/01 17:37:13 by hceviz            #+#    #+#             */
/*   Updated: 2024/12/07 14:57:02 by hceviz           ###   ########.fr       */
/*                                                                            */
/******************************************************************************/

#include "libft.h"
//#include <stddef.h>
int	ft_strncmp(const char *s1, const char *s2, size_t n)
{
	size_t	i;

	i = 0;
	if (n == 0)
		return (0);
	while (s1[i] == s2[i] && s1[i] && s2[i] && --n)
		i++;
	return ((unsigned char)s1[i] - (unsigned char)s2[i]);
}
/*#include <stdio.h>

int	main(void)
{
	const char	*s1 = "Hasan";
	const char	*s2 = "hasan";

	printf("%d", ft_strncmp(s1, s2, 0));
	return (1);
}*/
