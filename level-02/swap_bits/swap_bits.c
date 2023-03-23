/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   swap_bits.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tlemos-m <tlemos-m@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/21 14:30:17 by tlemos-m          #+#    #+#             */
/*   Updated: 2023/03/23 09:54:47 by tlemos-m         ###   ########.fr       */
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
	unsigned char	left_nibble;
	unsigned char	right_nibble;
	unsigned char	bit;

	bit = 0;
	left_nibble = (octet & 15);
	right_nibble = (octet & 240);
	right_nibble >>= 4;
	left_nibble <<= 4;
	bit = right_nibble | left_nibble;
	print_bits(bit);
	return (bit);
}

