/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   first_word.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tlemos-m <tlemos-m@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/17 13:37:56 by tlemos-m          #+#    #+#             */
/*   Updated: 2023/03/17 13:55:03 by tlemos-m         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	write_word(char *str)
{
	int	i;

	i = 0;
	while (str[i] == 32 || str[i] == 9)
		i++;
	while (str[i] > 33 && str[i] < 127)
	{
		write(1, &str[i], 1);
		i++;
	}
	write(1, "\n", 1);
	return ;
}

int	main(int argc, char **argv)
{
	if (argc == 2)
		write_word(argv[1]);
	else
		return (write(1, "\n", 1));
	return (0);
}
