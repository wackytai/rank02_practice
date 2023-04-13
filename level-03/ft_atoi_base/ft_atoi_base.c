/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi_base.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tlemos-m <tlemos-m@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/29 14:44:39 by tlemos-m          #+#    #+#             */
/*   Updated: 2023/04/13 13:38:14 by tlemos-m         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	check_base(char c, char *str, int size)
{
	int	i;

	i = 0;
	while (i < size && str[i])
	{
		if (c == str[i])
			return (1);
		i++;
	}
	return (0);
}

int	ft_atoi(char *str)
{
	int	res;
	int	i;

	i = 0;
	res = 0;
	while (str[i] != '\0')
	{
		res = (res * 10) + (str[i] - '0');
		i++;
	}
	return (res);
}

int	ft_atoi_base(const char *str, int str_base)
{
	int	i;
	int	s;
	int	res;

	s = 1;
	res = 0;
	i = 0;
	if (str[i] == '-')
	{
		s *= -1;
		i++;
	}
	while (check_base(str[i], (char *)str, str_base) && str[i])
	{
		if (str[i] >= 48 && str[i] <= 57)
			res = (res * str_base) + (str[i] - '0');
		else if (str[i] >= 'A' && str[i] <= 'Z')
			res = (res * str_base) + str[i] - 'A' + 10;
		else if (str[i] >= 'a' && str[i] <= 'z')
			res = (res * str_base) + str[i] - 'a' + 10;
		i++;
	}
	printf("%i\n", (res * s));
	return (res * s);
}

int	main(int argc, char **argv)
{
	if (argc == 3)
		ft_atoi_base(argv[1], ft_atoi(argv[2]));
	else
		return (0);
}
