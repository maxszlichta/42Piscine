/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_rev_int_tab.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mszlicht <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/05 15:42:18 by mszlicht          #+#    #+#             */
/*   Updated: 2023/12/06 12:33:04 by mszlicht         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_rev_int_tab(int *tab, int size)
{
	int	i;
	int	swap;

	i = 0;
	while (i < (size / 2))
	{
		swap = tab[i];
		tab [i] = tab [size - 1 - i];
		tab [size - 1 - i] = swap;
		i++;
	}
}

/*int	main()
{
	int	tab[6] = {0, 1, 2, 3, 4, 5};
	int	size = 6;

	ft_rev_int_tab(tab, size);
	printf("%d, %d, %d, %d, %d, %d", 
			tab[0], tab[1], tab[2], tab[3], tab[4], tab[5]);
	return 0;
}*/
