/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hceviz <hceviz@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/05 11:43:44 by hceviz            #+#    #+#             */
/*   Updated: 2024/12/05 13:06:42 by hceviz           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strjoin(char const *s1, char const *s2)
{
	char	*res;
	size_t	i;
	size_t	q;

	if (!s1 || !s2)
		return (NULL);
	res = malloc((ft_strlen(s1) + ft_strlen(s2) + 1) * sizeof(char));
	if (!res)
		return (NULL);
	i = 0;
	while (s1[i])
	{
		res[i] = s1[i];
		i++;
	}
	q = 0;
	while (s2[q])
	{
		res[i + q] = s2[q];
		q++;
	}
	res[i + q] = '\0';
	return (res);
}
/*#include <stdio.h>

int	main(void)
{
	char	*s1 = "Hasan";
	char	*s2 = "";

	printf("%s", ft_strjoin(s1, s2));
	return (1);
}*/