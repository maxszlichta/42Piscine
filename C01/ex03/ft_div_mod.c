/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_div_mod.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mszlicht <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/29 17:52:58 by mszlicht          #+#    #+#             */
/*   Updated: 2023/11/30 11:02:26 by mszlicht         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_div_mod(int a, int b, int *div, int *mod);

void	ft_div_mod(int a, int b, int *div, int *mod)
{
	if (b != 0)
	{
		*div = a / b;
		*mod = a % b;
	}
	else
	{
		*div = 0;
		*mod = 0;
	}
}

/*int	main(void) {
	int a = 10;
	int b = 3;
	int result_div, result_mod;

	ft_div_mod(a, b, &result_div, &result_mod);

	printf("Wynik dzielenia %d przez %d wynosi:\n
	w div: %d, oraz jego reszta w mod: %d\n.", 
	a, b, result_div, result_mod);
	return 0;
}*/
