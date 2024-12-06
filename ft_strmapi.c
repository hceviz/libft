/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmapi.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hceviz <hceviz@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/06 13:16:47 by hceviz            #+#    #+#             */
/*   Updated: 2024/12/06 14:18:28 by hceviz           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
//#include <stdio.h>
/*
size_t	ft_strlen(const char *s)
{
	size_t	len;

	len = 0;
	while (s[len] != '\0')
		len++;
	return (len);
}

void	ft_bzero(void *s, size_t n)
{
	unsigned char	*arr;
	size_t			i;

	i = 0;
	arr = (unsigned char *)s;
	while (i < n)
	{
		arr[i] = 0;
		i++;
	}
}

void	*ft_calloc(size_t nmemb, size_t size)
{
	void	*arr;

	arr = malloc(nmemb * size);
	if (arr == NULL)
		return (NULL);
	ft_bzero(arr, (nmemb * size));
	return (arr);
}

static char	to_upper_even(unsigned int index, char c) 
{
	if (index % 2 == 0 && c >= 'a' && c <= 'z') 
		return c - 32; // Convert to uppercase
    return c;
}
*/
char	*ft_strmapi(char const *s, char (*f)(unsigned int, char))
{
	char			*res;
	size_t			size;
	unsigned int	i;

	if (!s)
		return (NULL);
	size = ft_strlen(s);
	res = ft_calloc(size + 1, sizeof(char));
	if (res == NULL)
		return (NULL);
	i = 0;
	while (s[i])
	{
		res[i] = f(i, s[i]);
		i++;
	}
	return (res);
}
/*
int main() {
    char *s = NULL;
    char *modified = ft_strmapi(s, to_upper_even);

    if (modified) {
        printf("Original: %s\n", s);
        printf("Modified: %s\n", modified);
    }
    return 0;
}*/