/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hceviz <hceviz@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/05 18:22:46 by hceviz            #+#    #+#             */
/*   Updated: 2024/12/06 12:13:47 by hceviz           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
//#include <stdio.h>

/*in count_dgt i checked if(n == 0) cuz 
if i give number like 00000 it doesnt make in numerical system
it is equal to 0
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

size_t	ft_strlen(const char *s)
{
	size_t	len;

	len = 0;
	while (s[len] != '\0')
		len++;
	return (len);
}
*/
static size_t	count_dgt(long n)
{
	size_t	count;

	count = 0;
	if (n == 0)
		return (1);
	if (n < 0)
	{
		n = -n;
		count++;
	}
	while (n > 0)
	{
		count++;
		n = n / 10;
	}
	return (count);
}

char	*ft_itoa(int n)
{
	long		num;
	size_t		count;
	char		*res;

	num = n;
	count = count_dgt(num);
	res = (char *)ft_calloc(count_dgt(n) + 1, sizeof(char));
	if (res == NULL)
		return (NULL);
	if (num < 0)
	{
		res[0] = '-';
		num = -num;
	}
	count--;
	while (count > 0)
	{
		res[count] = (num % 10) + '0';
		num = num / 10;
		count--;
	}
	if (res[0] != '-')
		res[0] = (num % 10) + '0';
	return (res);
}
/*
int	main(void)
{
	int	n = 2147483648;

	printf("%s", ft_itoa(n));
	return 1;
}*/