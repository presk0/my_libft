/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: supersko <ndionis@student.42mulhouse.fr>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/24 15:51:11 by supersko          #+#    #+#             */
/*   Updated: 2022/03/11 18:54:49 by supersko         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strchr(const char *s, int c)
{
	unsigned int	ii;

	if (s)
	{
		ii = 0;
		while (s[ii] != '\0')
		{
			if (s[ii] == c)
			{
				return ((char *)(s + ii));
			}
			ii++;
		}
		if (c == '\0')
			return (s + ii);
		else
			return (NULL);
	}
}

/*
//
#include "error_msg.h"
#include <ctype.h>
#include <string.h>
#include <stdlib.h>
// MAIN
int test_strchr(char *str, char c)
{
	unsigned int ret;
	}

	ret = strchr(str, c) - ft_strchr(str, c);
	if (ret)
	{
		printf("[bug] at str: %s, c: %c\n", str, c);
		return (1);
	}
	return (0);
}

int	main(int argc, char *argv[])
{
	int ii = 0;
	test_strchr("abc", 'b');
	test_strchr("abc", '\0');
	test_strchr("", 'a');
	test_strchr("", '\0');
	printf("test finished\n");
}
*/
