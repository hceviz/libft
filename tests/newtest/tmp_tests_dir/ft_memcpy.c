/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hceviz <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/30 17:26:11 by hceviz            #+#    #+#             */
/*   Updated: 2024/12/01 12:20:53 by hceviz           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
//#include <stddef.h>
void	*ft_memcpy(void *dest, const void *src, size_t n)
{
	char		*dst;
	const char	*source;
	size_t		i;

	i = 0;
	dst = (char *)dest;
	source = (const char *)src;
	if ((dest == src) || n == 0)
		return (dest);
	if (!dest && !src)
		return (0);
	while (i < n)
	{
		dst[i] = source[i];
		i++;
	}
	return (dest);
}

/*#include <stdio.h>
int	main(void)
{
	char		x[5] = "Hasan";
	char		y[5];
	char		*z = ft_memcpy(y, x, 5);
	int			i;

	i = 0;
	while (i < 5)
	{
		printf("%c", y[i]);
		i++;
	}
	return 1;
}*/
