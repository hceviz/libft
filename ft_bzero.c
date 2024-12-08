/******************************************************************************/
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_bzero.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hceviz <hceviz@student.42warsaw.pl>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/30 15:36:22 by hceviz            #+#    #+#             */
/*   Updated: 2024/12/08 13:23:54 by hceviz           ###   ########.fr       */
/*                                                                            */
/******************************************************************************/

#include "libft.h"

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
