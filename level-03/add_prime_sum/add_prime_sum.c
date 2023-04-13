/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   add_prime_sum.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tlemos-m <tlemos-m@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/29 13:11:21 by tlemos-m          #+#    #+#             */
/*   Updated: 2023/03/29 14:42:04 by tlemos-m         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int	ft_atoi(char *str)
{
	int	res;
	int	s;
	int	i;

	i = 0;
	s = 1;
	res = 0;
	if (str[i] == '-' || str[i] == '+')
	{
		if (str[i] == '-')
		{
			s *= -1;
			i++;
		}
	}
	while (str[i] >= 48 && str[i] <= 57)
	{
		res = (res * 10) + (str[i] - '0');
		i++;
	}
	return (res * s);
}

void	ft_putnbr(int nb)
{
	char	c;

	if (nb > 9)
	{
		ft_putnbr(nb / 10);
		ft_putnbr(nb % 10);
	}
	else
	{
		c = nb + '0';
		write(1, &c, 1);
	}
}	

int	ft_is_prime(int nb)
{
	int	i;

	i = 5;
	if (nb < 2 || (nb > 2 && nb % 2 == 0))
		return (0);
	if (nb == 2 || nb == 3)
		return (1);
	while (i < nb)
	{
		if (nb % i == 0)
			return (0);
		i += 2;
	}
	return (1);
}

void	add_prime_sum(char *str)
{
	int	arg;
	int	nb;

	arg = ft_atoi(str);
	nb = 0;
	if (arg < 0)
	{
		write(1, "0\n", 2);
		return ;
	}
	while (arg > 1)
	{
		if (ft_is_prime(arg) == 1)
			nb += arg;
		arg--;
	}
	ft_putnbr(nb);
	write(1, "\n", 1);
	return ;
}

int	main(int argc, char **argv)
{
	if (argc == 2)
		add_prime_sum(argv[1]);
	else
		return (write(1, "0\n", 2));
}
