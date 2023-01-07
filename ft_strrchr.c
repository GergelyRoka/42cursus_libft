/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: groka <groka@student.42berlin.de>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/07 16:38:19 by groka             #+#    #+#             */
/*   Updated: 2022/12/07 16:38:19 by groka            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrchr(char *s, int c)
{
	char	*ptr;
	
	ptr = NULL;
	while(*s)
	{
		if (*s == c)
			ptr = s;
		s++;
	}
	if (c == '\0')
		return s;
	return ptr;
}

// int main(int argc, char const *argv[])
// {
// 	char	s[] = "asdd";
// 	*ft_strrchr(s, 'd') = 'x';
// 	printf("%s, %c", s, *ft_strrchr(s, 'a'));
// 	return 0;
// }
