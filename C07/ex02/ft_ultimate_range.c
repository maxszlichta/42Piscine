/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ultimate_range.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mszlicht <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/13 12:57:02 by mszlicht          #+#    #+#             */
/*   Updated: 2023/12/13 13:16:50 by mszlicht         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int	ft_ultimate_range(int **range, int min, int max)
{
	int	i;
	int	*tab;

	if (min >= max)
	{
		*range = NULL;
		return (0);
	}
	i = max - min;
	tab = malloc(sizeof(int) * (i));
	if (tab == NULL)
	{
		*range = NULL;
		return (-1);
	}
	*range = tab;
	i = 0;
	while (max > min)
	{
		tab[i] = min;
		min++;
		i++;
	}
	return (i);
}
/*
#include <stdio.h>

int	main()
{
	int	min;
	int	max;
	int	*tab;
	int	size;
	int	i;
	
	i = 0;
	min = 5;
	max = 10;
	size = ft_ultimate_range(&tab, min, max);
	while(i < size)
	{
		printf("%d\n", tab[i]);
		i++;
	}
}*/
