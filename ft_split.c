/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bkjornra <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/03/31 22:21:46 by bkjornra          #+#    #+#             */
/*   Updated: 2019/03/31 22:54:45 by bkjornra         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		ft_isblank(char *str)
{
	if (str == ' ' || str == '\t')
		return (1);
	return (0);
}

static int	wordlen(char *str)
{
	unsigned int len;
	len = 0;
	while (*str)
	{
		if (ft_isblank(*str))
			str++;
		else
		{
			len++;
			while (*str && !ft_isblank(*str))
				str++;
		}
	}
	return (len);
}

int		**ft_split(char *str)
{
	int i = 0;
	int j = 0;
	int k;
	char **r;
	int wlen = 0;

	if (!(r = (char**)malloc(sizeof(char*) * (wordlen(s) + 1))))
		return (0);
	while (*str)
	{
		while (*str && ft_isblank(*str))
			str++;
		if (*str && !ft_isblank(*str))
		{	
			count++;
			while (*str && !ft_isblank(*str))
				str++;
		}
	}
	return (count);
}

char  **ft_split(char *str)

