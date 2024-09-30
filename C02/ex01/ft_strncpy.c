/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mszlicht <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/05 18:06:33 by mszlicht          #+#    #+#             */
/*   Updated: 2023/12/06 12:33:45 by mszlicht         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strncpy(char *dest, char *src, unsigned int n)
{
	unsigned int	i;

	i = 0;
	while (src[i] != '\0' && i < n)
	{
		dest[i] = src[i];
		i++;
	}
	while (i < n)
	{
		dest[i] = '\0';
		i++;
	}
	return (dest);
}

/*int	main()
{
	char src[] = "Woo";
	char dest[] = "Hoo";
	char dest1[] = "Hey";

	printf("%s", ft_strcpy(dest, src, 3));
	printf("\n%s", strcpy(dest1, src, 3));
	printf("\n%s", ft_strcpy(dest, src, 5));
        printf("\n%s", strcpy(dest1, src, 5));
	printf("\n%s", ft_strcpy(dest, src, 7));
        printf("\n%s", strcpy(dest1, src, 7));
}*/
