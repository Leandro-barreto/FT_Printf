/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_fd.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lborges- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/01/22 17:57:01 by lborges-          #+#    #+#             */
/*   Updated: 2020/02/17 13:41:29 by lborges-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int		ft_putnbr_fd(int n, int fd, int print)
{
	long	nb;
	int		size;
	int		numbers[50];
	int		i;

	nb = n;
	size = 0;
	if (n == 0)
	{
		if (print)
			ft_putchar_fd('0', fd);
		return (1);
	}
	if (nb < 0)
		nb *= -1;
	while (nb)
	{
		numbers[size++] = nb % 10;
		nb = nb / 10;
	}
	i = size;
	while (--i >= 0 && print)
		ft_putchar_fd((char)(numbers[i] + '0'), fd);
	return ((n > 0) ? size : (size + 1));
}
