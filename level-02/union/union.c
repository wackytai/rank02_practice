/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   union.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tlemos-m <tlemos-m@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/20 12:49:52 by tlemos-m          #+#    #+#             */
/*   Updated: 2023/03/20 13:47:02 by tlemos-m         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdio.h>

void	check_doubles(char *str)
{
	int	j;
	int	i;

	i = 0;
	while (str[i] != '\0')
	{
		j = i - 1;
		while (j > 0)
		{
			if (str[i] == str[j])
				break ;
			j--;
		}
		if (j <= 0)
			write(1, &str[i], 1);
		i++;
	}
	return ;
}

void	check_union(char *s1, char *s2)
{
	int	j;
	int	i;
	int	k;

	i = 0;
	while (s2[i] != '\0')
	{
		j = i - 1;
		while (j > 0)
		{
			if (s2[i] == s2[j])
				break ;
			j--;
		}
		if (j <= 0)
		{
			k = 0;
			while (s1[k] != '\0')
			{
				if (s2[i] == s1[k])
					break ;
				k++;
			}
			if (s1[k] == '\0')
				write(1, &s1[i], 1);
		}
		i++;
	}
	write(1, "\n", 1);
	return ;
}

int	main(int argc, char **argv)
{
	if (argc != 3)
		return (write(1, "\n", 1));
	else
	{
		check_doubles(argv[1]);
		check_union(argv[1], argv[2]);
		return (0);
	}
}
