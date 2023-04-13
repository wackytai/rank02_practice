/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   fprime.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tlemos-m <tlemos-m@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/13 13:45:22 by tlemos-m          #+#    #+#             */
/*   Updated: 2023/04/13 14:01:20 by tlemos-m         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <stdlib.h>

void	fprime(int nb)
{
	int	i;

	i = 2;
	if (nb == 1)
	{
		printf("%i", nb);
		return ;
	}
	while (i <= nb)
	{
		if (nb % i == 0)
		{
			printf("%i", i);
			if (nb == i)
				break ;
			nb /= i;
			printf("*");
			i = 1;
		}
		i++;
	}
	return ;
}

int	main(int argc, char **argv)
{
	if (argc == 2)	
		fprime(atoi(argv[1]));
	printf("\n");
	return (0);
}
