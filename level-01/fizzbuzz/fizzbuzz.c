/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   fizzbuzz.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tlemos-m <tlemos-m@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/17 13:57:19 by tlemos-m          #+#    #+#             */
/*   Updated: 2023/03/17 14:23:11 by tlemos-m         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	put_char(char c)
{
	write(1, &c, 1);
}

void	put_nbr(int nb)
{
	if (nb > 9)
	{
		put_nbr(nb / 10);
		put_char(nb % 10 + '0');
	}
	if (nb <= 9)
		put_char(nb % 10 + '0');
	return ;
}

void	write_fizzbuzz(void)
{
	int	i;

	i = 1;
	while (i < 101)
	{
		if (i % 3 == 0 && i % 5 == 0)
			write(1, "fizzbuzz\n", 9);
		else if (i % 3 == 0)
			write(1, "fizz\n", 5);
		else if (i % 5 == 0)
			write(1, "buzz\n", 5);
		else
		{
			put_nbr(i);
			write(1, "\n", 1);
		}
		i++;
	}
}

int	main(void)
{
	write_fizzbuzz();
	return (0);
}
