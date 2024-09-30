/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlen.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mszlicht <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/30 16:52:50 by mszlicht          #+#    #+#             */
/*   Updated: 2023/12/05 15:41:26 by mszlicht         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int	ft_strlen(char *str)
{
	int	licznik;

	licznik = 0;
	while (str[licznik] != '\0')
		licznik++;
	return (licznik);
}

/*int	main()
{
	printf("%d\n", ft_strlen("sdvdgsavdh"));
	return 0;
}*/
