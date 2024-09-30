/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_range.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mszlicht <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/13 12:19:23 by mszlicht          #+#    #+#             */
/*   Updated: 2023/12/13 12:37:05 by mszlicht         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int	*ft_range(int min, int max)
{
	int	*tab;
	int	i;

	if (min >= max)
		return (NULL);
	tab = (int *)malloc(sizeof(*tab) * (max - min));
	if (tab == NULL)
		return (NULL);
	else
	{
		i = -1;
		while (i++ < max - min)
			tab[i] = min + i;
		return (tab);
	}
}
/*
#include <stdio.h>

int	main()
{
	int i;
	int min = 0;
	int max = 5;
	int *tab;
	tab = ft_range(min, max);
	if (tab != NULL)
	{

		i = -1;
		while (i++ < max - min)
		{
			printf("%d\n", tab[i]);
		}
	}
	else
		printf("Wrong memory allocation!");
}*/
