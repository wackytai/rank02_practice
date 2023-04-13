/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tlemos-m <tlemos-m@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/13 14:03:20 by tlemos-m          #+#    #+#             */
/*   Updated: 2023/04/13 14:42:45 by tlemos-m         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_itoa(int nbr)
{
	int		n;
	int		i;
	char	*str;

	n = nbr;
	i = 0;
	if (n <= 0)
		i++;
	while (n != 0)
	{
		i++;
		n /= 10;
	}
	str = malloc(sizeof(char) * (i + 1));
	str[i] = '\0';
	if (nbr == -2147483648)
	{
		str = "-2147483648";
		return (str);
	}
	if (nbr == 2147483647)
	{
		str = "2147483647";
		return (str);
	}
	if (nbr == 0)
	{
		str[0] = '0';
		return (str);
	}
	if (nbr < 0)
	{
		str[0] = '-';
		nbr *= -1;
	}
	while (nbr)
	{
		str[--i] = nbr % 10 + '0';
		nbr /= 10;
	}
	return (str);
}
