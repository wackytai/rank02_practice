/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   union.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tlemos-m <tlemos-m@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/20 17:09:51 by tlemos-m          #+#    #+#             */
/*   Updated: 2023/03/20 17:51:42 by tlemos-m         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	check_doubles(char *str)
{
	int	i;
	int	j;

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

void	ft_union(char *s1, char *s2)
{
	int	i;
	int	j;
	int	k;

	i = 0;
	while (s2[i] != 0)
	{
		j = i - 1;
		while (j >= 0)
		{
			if (s2[i] == s2[j])
				break ;
			j--;
		}
		k = 0;
		if (j <= 0)
		{
			while (s1[k] != '\0')
			{
				if (s1[k] == s2[i])
					break ;
				k++;
			}
			if (s1[k] == '\0')
				write(1, &s2[i], 1);
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
		ft_union(argv[1], argv[2]);
		return (0);
	}
}
