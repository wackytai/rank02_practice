/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   camel_to_snake.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tlemos-m <tlemos-m@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/28 12:38:14 by tlemos-m          #+#    #+#             */
/*   Updated: 2023/03/28 12:47:08 by tlemos-m         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	create_string(char *str)
{
	int		i;
	char	c;

	i = 0;
	while (str[i] != '\0')
	{
		c = str[i];
		if (str[i] > 64 && str[i] < 91 && i != 0)
		{
			write(1, "_", 1);
			c = str[i] + 32;
		}
		write(1, &c, 1);
		i++;
	}
	return ;
}

int	main(int argc, char **argv)
{
	if (argc == 2)
		create_string(argv[1]);
	return (write(1, "\n", 1));
}
