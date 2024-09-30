/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_is_prime.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mszlicht <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/13 20:09:43 by mszlicht          #+#    #+#             */
/*   Updated: 2023/12/14 15:53:10 by mszlicht         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_is_prime(int nb)
{
	int	x;

	x = 2;
	if (nb < 2)
		return (0);
	else if (nb >= 2)
	{
		while (x <= nb / x)
		{
			if (nb % x == 0)
			{
				return (0);
			}
			++x;
		}
	}
	return (1);
}
/*
#include <stdio.h>

int	main()
{
	printf("%d", ft_is_prime(123));
	return (0);
}*/
