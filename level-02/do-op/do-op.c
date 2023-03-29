/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   do-op.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tlemos-m <tlemos-m@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/28 12:50:01 by tlemos-m          #+#    #+#             */
/*   Updated: 2023/03/28 12:57:22 by tlemos-m         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <stdlib.h>

void	do_op(int nb_1, char op, int nb_2)
{
	int	res;

	res = 0;
	if (op == 45)
		res = nb_1 - nb_2;
	else if (op == 43)
		res = nb_1 + nb_2;
	else if (op == 47)
		res = nb_1 / nb_2;
	else if (op == 42)
		res = nb_1 * nb_2;
	printf("%i", res);
	return ;
}

int	main(int argc, char **argv)
{
	if (argc == 4)
		do_op(atoi(argv[1]), argv[2][0], atoi(argv[3]));
	return (printf("\n"));
}
