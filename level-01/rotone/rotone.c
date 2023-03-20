/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rotone.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tlemos-m <tlemos-m@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/17 16:26:44 by tlemos-m          #+#    #+#             */
/*   Updated: 2023/03/20 09:58:40 by tlemos-m         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	check_replace(char c)
{
	if ((c > 77 && c < 91) || (c > 109 && c < 123))
		c = c - 26;
	else if ((c > 64 && c <= 77) || (c > 96 && c <= 109))
		c = c + (90 - 26);
	write (1, &c, 1);
	return ;
}

void	rotone(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
	{
		check_replace(str[i]);
		i++;
	}
	return ;
}

int	main(int argc, char **argv)
{
	if (argc != 2)
		return (write(1, "\n", 1));
	else
		rotone(argv[1]);
}
