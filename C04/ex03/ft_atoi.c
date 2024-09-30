/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mszlicht <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/06 15:23:21 by mszlicht          #+#    #+#             */
/*   Updated: 2023/12/12 12:57:58 by mszlicht         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdio.h>

int	ft_atoi(char *str)
{
	int	negative_count;
	int	number;

	negative_count = 0;
	number = 0;
	while (*str == ' ')
		str++;
	while (*str == '+' || *str == '-')
	{
		if (*str == '-')
			negative_count += 1;
		str++;
	}
	while (*str >= '0' && *str <= '9')
	{
		number = number * 10 + (*str - '0');
		str++;
	}
	if (negative_count % 2 == 1)
		return (number * -1);
	return (number);
}

/*int	main(void)
{
	char	*str	= "    ----32135634";
	int m = ft_atoi(&str[0]);
	printf("%d", m);
}*/
