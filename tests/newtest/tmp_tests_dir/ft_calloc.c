/******************************************************************************/
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hceviz <hceviz@student.42warsaw.pl>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/04 15:35:13 by hceviz            #+#    #+#             */
/*   Updated: 2024/12/07 15:14:05 by hceviz           ###   ########.fr       */
/*                                                                            */
/******************************************************************************/

#include "libft.h"
// we should return void array 
//because we are allocating memory for an array
//because of calloc behavior 
//we need to fill the array with zeros if the allocation is succesful

void	*ft_calloc(size_t nmemb, size_t size)
{
	void	*arr;

	if (nmemb == 0 || size == 0)
		return (NULL);
	arr = (void *)malloc(nmemb * size);
	if (arr == NULL)
		return (NULL);
	ft_bzero(arr, (nmemb * size));
	return (arr);
}
