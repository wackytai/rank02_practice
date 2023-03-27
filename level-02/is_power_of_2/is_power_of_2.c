/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   is_power_of_2.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tlemos-m <tlemos-m@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/27 16:43:05 by tlemos-m          #+#    #+#             */
/*   Updated: 2023/03/27 16:58:56 by tlemos-m         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	is_power_of_2(unsigned int n)
{
	unsigned int	power;

	power = 1;
	while (power < n)
	{
		if (power == n)
			break ;
		power *= 2;
	}
	if (power == n)
		return (1);
	else
		return (0);
}
