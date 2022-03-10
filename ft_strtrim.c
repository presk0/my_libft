/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: supersko <ndionis@student.42mulhouse.fr>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/01 14:33:46 by supersko          #+#    #+#             */
/*   Updated: 2022/03/10 16:24:44 by supersko         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	is_trimable(char c, char *trimset)
{
	while (*trimset)
	{
		if (*trimset++ == c)
			return (1);
	}
	if (!c)
		return (1);
	return (0);
}

char	*ft_strtrim(char const *s1, char const *set)
{
	unsigned int	start;
	unsigned int	end;
	char			*ret;
	char			*new_str;

	if (!s1)
		return (NULL);
	start = 0;
	while (*s1 && is_trimable((char) *s1, (char *) set))
		s1++;
	end = ft_strlen((char *) s1);
	while (end > start && is_trimable((char) s1[end], (char *) set))
		end--;
	new_str = malloc(sizeof(char) * ++end + 1);
	if (!new_str)
		return (NULL);
	ret = new_str;
	while (start <= end && end && *s1)
	{
		*new_str++ = *s1++;
		end--;
	}
	*new_str = '\0';
	return (ret);
}

#include <stdio.h>
#include <string.h>

int main(void)
{
	char s[100];

	strcpy(s, "- a a -");
	printf("[%s] -> [%s]\n", s, ft_strtrim(s, " -"));
	strcpy(s, "    --");
	printf("[%s] -> [%s]\n", s, ft_strtrim(s, " -"));
	strcpy(s, "f f");
	printf("[%s] -> [%s]\n", s, ft_strtrim(s, " -"));
	strcpy(s, "a");
	printf("[%s] -> [%s]\n", s, ft_strtrim(s, " -"));
	strcpy(s, "");
	printf("[%s] -> [%s]\n", s, ft_strtrim(s, " -"));
}
