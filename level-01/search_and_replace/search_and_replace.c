/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   search_and_replace.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tlemos-m <tlemos-m@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/20 10:07:07 by tlemos-m          #+#    #+#             */
/*   Updated: 2023/03/20 10:21:13 by tlemos-m         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	replace_char(char *str, char c, char r)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
	{
		if (str[i] == c)
			write(1, &r, 1);
		else
			write(1, &str[i], 1);
		i++;
	}
	return ;
}

void	search_char(char *str, char c, char r)
{
	int	i;
	int	flag;

	i = 0;
	flag = 0;
	while (str[i] != '\0')
	{
		if (str[i] == c)
		{
			flag = 1;
			break ;
		}
		i++;
	}
	i = 0;
	if (flag == 0)
	{
		while (str[i])
		{
			write(1, &str[i], 1);
			i++;
		}
	}
	else
		replace_char(str, c, r);
	return ;
}

int	main(int argc, char **argv)
{
	if (argc != 4)
		return (write(1, "\n", 1));
	else if (argv[2][1] != '\0' || argv[3][1] != '\0')
		return (write(1, "\n", 1));
	else
	{
		search_char(argv[1], argv[2][0], argv[3][0]);
		write(1, "\n", 1);
		return (0);
	}
}
