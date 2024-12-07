/******************************************************************************/
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_fd.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hceviz <hceviz@student.42warsaw.pl>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/06 16:53:56 by hceviz            #+#    #+#             */
/*   Updated: 2024/12/07 14:42:38 by hceviz           ###   ########.fr       */
/*                                                                            */
/******************************************************************************/

#include "libft.h"

static void	putnbr(long n, int fd)
{
	if (n < 0)
	{
		ft_putchar_fd('-', fd);
		n = -n;
	}
	if (n >= 10)
	{
		putnbr(n / 10, fd);
		n = n % 10;
	}
	if (n < 10)
		ft_putchar_fd(n + 48, fd);
}
void	ft_putnbr_fd(int n, int fd)
{
	long	num;

	num = n;
	if (fd < 0)
		return ;
	putnbr(num, fd);
}
