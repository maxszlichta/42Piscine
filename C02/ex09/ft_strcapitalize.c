/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcapitalize.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mszlicht <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/06 12:18:40 by mszlicht          #+#    #+#             */
/*   Updated: 2023/12/07 15:17:10 by mszlicht         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	*ft_strlowcase(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
	{
		if (str[i] >= 'A' && str[i] <= 'Z')
		{
			str[i] += 32;
		}
		i++;
	}
	return (str);
}

int	ft_strcapitalize(char str*)
{
	int	i;
	int	ia;

	i = 0;
	ia = 1;
	ft_strlowcase(str);
	while (str[i] != '\0')
	{
		if (str[i] >= 'a' && str[i] <= 'z')
		{
			if (ia == 1)
				str[i] -= 32;
			ia = 0;
		}
		else if (str[i] >= '0' && str[i] <= '9')
			ia = 0;
		else
			ia = 1;
		i++;
	}
	return (str);
}

/*int	main()
{
	char [str] = "salut, comment tu vas ? 42mots quarante-deux; cinquante+et+un";
	char str1[] = "fenbauunf,fnuan.fmao e7vahoa&6jdn)(*732";
	printf("%s", ft_strcapitalize(str));
	printf("\n%s", ft_strcapitalize(str1));
}*/
