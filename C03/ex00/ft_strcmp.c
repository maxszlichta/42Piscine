/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mszlicht <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/06 13:26:23 by mszlicht          #+#    #+#             */
/*   Updated: 2023/12/11 13:32:48 by mszlicht         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	ft_strcmp(char *s1, char *s2)
{
	int	i;

	i = 0;
	while (s1[i] != '\0' || s2[i] != '\0')
	{
		if (s1[i] != s2[i])
			return (s1[i] - s2[i]);
		i++;
	}
	return (0);
}

/*int	main()
{
	printf("%d", ft_strcmp("Max", "Max1"));
	printf("\n%d", ft_strcmp("Max", "Maxym"));
	printf("\n%d", ft_strcmp("Maxym", "Max1"));
	printf("\n%d", ft_strcmp("Max", "Max"));
}*/
