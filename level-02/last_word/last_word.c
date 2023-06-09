/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   last_word.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tlemos-m <tlemos-m@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/23 10:46:29 by tlemos-m          #+#    #+#             */
/*   Updated: 2023/03/27 16:38:01 by tlemos-m         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

char	*find_last_word(char *str)
{
	char	*word;
	int		i;

	i = 0;
	word = &str[i];
	while (str[i] != '\0')
	{
		if (str[i - 1] == 32 && (str[i] > 32 && str[i] < 127))
			word = &str[i];
		i++;
	}
	return (word);
}

void	get_last_word(char *str)
{
	char	*word;
	int		i;

	i = 0;
	word = find_last_word(str);
	while (word[i] != '\0')
	{
		if (word[i] > 32 && word[i] < 127)
			write(1, &word[i], 1);
		i++;
	}
}

int	main(int argc, char **argv)
{
	if (argc == 2)
	{
		get_last_word(argv[1]);
		write(1, "\n", 1);
	}
	else
		return (write(1, "\n", 1));
}
