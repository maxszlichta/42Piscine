/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcat2.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mszlicht <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/06 14:38:33 by mszlicht          #+#    #+#             */
/*   Updated: 2023/12/06 14:38:52 by mszlicht         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <string.h>

char	*ft_strcat(char *dest, char *src)
{
	int	i;

	i = 0;
	while (dest[i] != '\0')
		i++;
	while (*src != '\0')
	{
		dest[i] = *src;
		src++;
		i++;
	}
	dest[i] = '\0';
	return (dest);
}
/*
int main(void)
{
	char dest[10] = "I'm";
	char dest_1[10] = "I'm";	
	char src[7] = "Max";
	char src_1[7] = "Max";

	printf("%s\n", ft_strcat(dest, src));
	printf("%s", strcat(dest_1, src_1));
}
*/
