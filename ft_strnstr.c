/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: groka <groka@student.42berlin.de>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/07 14:08:51 by groka             #+#    #+#             */
/*   Updated: 2023/01/07 14:08:51 by groka            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include	"libft.h"

char	*strnstr(const char *s1, const char *s2, size_t n)
{
	char	*word;
	int		i;
	int		j;

	if (s2[0] == '\0')
		return ((char*)s1);
	i = 0;
	j = 0;
	while (i < n && s1[i])
	{
		j = 0;
		while (s1 + i + j && i + j < n)
		{
			if (s2[j] != s1[i + j])
				break;
			++j;	
			if (!(s2[j]))
				return ((char*)(s1 + i));
		}
		++i;
	}
	return (NULL);
}

/*
int main(void)
{
	printf("1) %s\n",strnstr("a bar a bar a bar", "bar", 11));
	printf("2) %s\n",strnstr("a bar a bar a bar", "", 11));
	printf("1) %s\n",strnstr("a bar a bar a bar", " ", 11));
	printf("3) %s\n",strnstr("0123456789", "89", 20 ));
	printf("4) %s\n",strnstr("0123456789", "90", 20 ));
	printf("4) %s\n",strnstr("0123456789", "90", 20 ));
	printf("5) %s\n",strnstr("0123456789", "1", 1 ));
	printf("6) %s\n",strnstr("0123456789", "1", 2 ));
	printf("7) %s\n",strnstr("0123456789", "1", 3 ));
	printf("8) %s\n",strnstr("aaaaaaaaaaz", "za", 20 ));
	printf("9) %s\n",strnstr("aaaaaaaaaaz", "za", 20 ));
	printf("5) %s\n",strnstr("0123456789", "123", 1 ));
	printf("6) %s\n",strnstr("0123456789", "123", 2 ));
	printf("7) %s\n",strnstr("0123456789", "123", 3 ));
	printf("7) %s\n",strnstr("0123456789", "123", 4 ));
	return 0;
}
*/