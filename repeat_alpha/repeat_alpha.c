/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   repeat_alpha.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tlemos-m <tlemos-m@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/17 15:25:58 by tlemos-m          #+#    #+#             */
/*   Updated: 2023/03/17 15:50:11 by tlemos-m         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdio.h>

int	check_index(char c)
{
	int	i;

	while (c != i)
		i++;
	if (c > 96 && c < 127)
		i = i - 96;
	else if (c > 64 && c < 91)
		i = i - 64;
	else
		i = 1;
	return (i);
}

void	repeat_alpha(char *str)
{
	int	i;
	int	index;

	i = 0;
	while (str[i] != '\0')
	{
		index = check_index(str[i]);
		while (index--)
			write(1, &str[i], 1);
		i++;
	}
	write(1, "\n", 1);
	return ;
}

int	main(int argc, char **argv)
{
	if (argc != 2)
		write(1, "\n", 1);
	else
		repeat_alpha(argv[1]);
	return (0);
}
