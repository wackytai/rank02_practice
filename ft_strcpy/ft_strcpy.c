/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tlemos-m <tlemos-m@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/17 14:30:30 by tlemos-m          #+#    #+#             */
/*   Updated: 2023/03/17 14:37:19 by tlemos-m         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string.h>

char	*ft_strcpy(char *s1, char *s2)
{
	int	i;

	i = 0;
	if (ft_strlen(s2) >= ft_strlen(s1))
	{
		while (s1[i] != '\0')
		{
			s2[i] = s1[i];
			i++;
		}
		s1[i] = '\n';
	}
	return ;
}

int	ft_strlen(char *str)
{
	int	i;

	i = 0;
	while (str[i] != "\0")
		i++;
	return (i);
}
