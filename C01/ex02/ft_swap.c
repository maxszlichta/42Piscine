/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_swap.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mszlicht <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/29 18:03:03 by mszlicht          #+#    #+#             */
/*   Updated: 2023/11/30 10:23:45 by mszlicht         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_swap(int *a, int *b);

void	ft_swap(int *a, int *b)
{
	int	temp;

	temp = *a;
	*a = *b;
	*b = temp;
}

/*int	main(void)
{

	int x = 5, y = 10;
	printf("Przed akcja swap: x = %d, y = %d\n", x, y);

	ft_swap(&x, &y);
	printf("Po akcji swap: x = %d, y = %d\n", x, y);
	return 0;
}*/
