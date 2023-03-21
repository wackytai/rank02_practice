/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   swap_bits.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tlemos-m <tlemos-m@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/21 14:30:17 by tlemos-m          #+#    #+#             */
/*   Updated: 2023/03/21 14:58:47 by tlemos-m         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	print_bits(unsigned char octet)
{
	unsigned char	bit;
	int				index;

	index = 7;
	while (index >= 0)
	{
		bit = (octet >> index & 1) + '0';
		write(1, &bit, 1);
		index--;
	}
}

unsigned char	swap_bits(unsigned char octet)
{
	unsigned char	bit;
	int				i;

	i = 4;
	bit = 0;
	bit <<= 1;
	octet >>= i - 1;
	while (i > 0)
	{
		bit = bit | (octet & 1);
		octet <<= 1;
		i--;
	}
	i = 8;
	octet >>= i - 1;
	while (i > 4)
	{
		bit = bit | (octet & 1);
		octet <<= 0;
		i--;
	}
	print_bits(bit);
	return (bit);
}

int	main(void)
{
	swap_bits(65);
	write(1, "\n", 1);
	return (0);
}
