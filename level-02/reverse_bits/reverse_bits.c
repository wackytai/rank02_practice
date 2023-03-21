/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   reverse_bits.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tlemos-m <tlemos-m@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/21 12:15:39 by tlemos-m          #+#    #+#             */
/*   Updated: 2023/03/21 13:41:39 by tlemos-m         ###   ########.fr       */
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

unsigned char	reverse_bits(unsigned char octet)
{
	unsigned char	bit;
	int				index;

	bit = 0;
	index = 7;
	while (index >= 0)
	{
		bit <<= 1;
		bit = bit | (octet & 1);
		octet >>= 1;
		index--;
	}
	print_bits(bit);
	return (bit);
}

int	main(void)
{
	reverse_bits(2);
	write(1, "\n", 1);
	reverse_bits(4);
	write(1, "\n", 1);
	reverse_bits(5);
	write(1, "\n", 1);
	reverse_bits(42);
	write(1, "\n", 1);
	return (0);
}
