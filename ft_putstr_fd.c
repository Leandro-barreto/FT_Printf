/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr_fd.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lborges- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/01/22 17:51:28 by lborges-          #+#    #+#             */
/*   Updated: 2020/02/17 13:32:53 by lborges-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_putstr_fd(char *s, int fd, int size, int flag)
{
	int	n;

	n = 0;
	if (s)
	{
		while (*s && (size > 0 || !flag))
		{
			ft_putchar_fd(*s, fd);
			s++;
			n++;
			size--;
		}
	}
	return (n);
}
