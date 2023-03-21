/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   print_bits.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tlemos-m <tlemos-m@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/21 12:15:39 by tlemos-m          #+#    #+#             */
/*   Updated: 2023/03/21 12:25:32 by tlemos-m         ###   ########.fr       */
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

int	main(void)
{
	print_bits(2);
	write(1, "\n", 1);
	print_bits(4);
	write(1, "\n", 1);
	print_bits(5);
	write(1, "\n", 1);
	print_bits(42);
	write(1, "\n", 1);
	return (0);
}
