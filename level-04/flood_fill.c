/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   flood_fill.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tlemos-m <tlemos-m@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/13 12:30:53 by tlemos-m          #+#    #+#             */
/*   Updated: 2023/04/13 13:18:04 by tlemos-m         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "flood_fill.h"

void	fill(char **tab, int x, int y, t_point size)
{
	if (x >= size.y || y >= size.x || x < 0 || y < 0 || tab[x][y] != '1')
		return ;
	tab[x][y] = 'F';
	fill(tab, x - 1, y, size);
	fill(tab, x + 1, y, size);
	fill(tab, x, y - 1, size);
	fill(tab, x, y + 1, size);
}

void	flood_fill(char **tab, t_point size, t_point begin)
{
	fill(tab, begin.y, begin.x, size);
}

char	**make_area(char** zone, t_point size)
{
	char	**new;

	new = malloc(sizeof(char *) * size.y);
	for (int i = 0; i < size.y; ++i)
	{
		new[i] = malloc(size.x + 1);
		for (int j = 0; j < size.x; ++j)
			new[i][j] = zone[i][j];
		new[i][size.x] = '\0';
	}

	return new;
}

int main(void)
{
	t_point size = {8, 5};
	char *zone[] = {
		"11111111",
		"10001001",
		"10010001",
		"10110001",
		"11100001",
	};

	char**  area = make_area(zone, size);
	for (int i = 0; i < size.y; ++i)
		printf("%s\n", area[i]);
	printf("\n");

	t_point begin = {7, 4};
	flood_fill(area, size, begin);
	for (int i = 0; i < size.y; ++i)
		printf("%s\n", area[i]);
	return (0);
}
