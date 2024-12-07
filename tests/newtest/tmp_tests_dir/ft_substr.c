/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hceviz <hceviz@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/04 19:48:28 by hceviz            #+#    #+#             */
/*   Updated: 2024/12/05 11:04:19 by hceviz           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	char	*ptr;
	char	*res;
	size_t	i;

	if (!s)
		return (NULL);
	if (start > ft_strlen(s))
		return (ft_strdup(""));
	ptr = (char *)s + start;
	if (ft_strlen(ptr) < len)
		i = ft_strlen(ptr) + 1;
	else
		i = len + 1;
	res = malloc(i);
	if (!res)
		return (NULL);
	ft_strlcpy(res, ptr, i);
	return (res);
}
/*
#include <stdio.h>
int	main(void)
{
	char	*s = "HasanCeviz";
	char	*res = ft_substr(s, 2, 20);
	printf("%s", res);
	return 1;
}*/
