/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   wdmatch.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tlemos-m <tlemos-m@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/20 10:59:09 by tlemos-m          #+#    #+#             */
/*   Updated: 2023/03/20 12:43:23 by tlemos-m         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	search_for_string(char *s1, char *s2)
{
	int	i;
	int	j;
	int	counter;

	i = 0;
	counter = 0;
	j = 0;
	while (s1[i] != '\0')
	{
		while (s2[j] != '\0')
		{
			if (s1[i] == s2[j])
			{
				counter++;
				j++;
				break ;
			}
			j++;
		}
		i++;
	}
	if (counter == i)
	{
		i = 0;
		while (s1[i] != '\0')
		{
			write(1, &s1[i], 1);
			i++;
		}
	}
	write(1, "\n", 1);
}

int	main(int argc, char **argv)
{
	if (argc != 3)
		return (write(1, "\n", 1));
	else
	{
		search_for_string(argv[1], argv[2]);
	}
}
