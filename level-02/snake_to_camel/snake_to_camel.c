/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   snake_to_camel.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tlemos-m <tlemos-m@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/20 19:27:50 by tlemos-m          #+#    #+#             */
/*   Updated: 2023/03/20 20:30:03 by tlemos-m         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	create_string(char *old_str)
{
	char	c;
	int		i;

	i = 0;
	while (old_str[i] != 0)
	{
		if (old_str[i] == 95)
		{
			i++;
			c = old_str[i] - 32;
		}
		else
			c = old_str[i];
		write(1, &c, 1);
		i++;
	}
	write(1, "\n", 1);
	return ;
}

int	main(int argc, char **argv)
{
	if (argc != 2)
		return (write(1, "\n", 1));
	else
	{
		create_string(argv[1]);
		return (0);
	}
}
