/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrev.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tlemos-m <tlemos-m@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/27 17:41:24 by tlemos-m          #+#    #+#             */
/*   Updated: 2023/03/27 18:05:54 by tlemos-m         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strrev(char *str)
{
	char	temp;
	int		i;
	int		j;

	i = 0;
	j = 0;
	printf("str: %s\n", str);
	while (str[j] != '\0')
		j++;
	while (i < j / 2)
	{
		temp = str[i];
		str[i] = str[j - 1 - i];
		str[j - 1 - i] = temp;
		i++;
	}
	printf("rev: %s\n", str);
	return (str);
}
