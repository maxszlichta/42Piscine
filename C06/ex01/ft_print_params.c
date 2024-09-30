/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_params.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mszlicht <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/11 17:32:16 by mszlicht          #+#    #+#             */
/*   Updated: 2023/12/13 10:38:58 by mszlicht         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c)
{
	write (1, &c, 1);
}

void	ft_putstr(char *str)
{
	while (*str)
	{
		ft_putchar (*str);
		str++;
	}
}

int	main(int argc, char **argv)
{
	int	i;

	i = 1;
	while (argc > 0 && argv[i])
	{
		ft_putstr (argv[i]);
		ft_putchar ('\n');
		i++;
	}
	return (0);
}
