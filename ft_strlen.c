/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlen.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: groka <groka@student.42berlin.de>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/07 16:38:11 by groka             #+#    #+#             */
/*   Updated: 2022/12/07 16:38:11 by groka            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlen(const char *s);

size_t	ft_strlen(const char *s)
{
	size_t length;
	
	length = 0;
	while (*s++)
		++length;
	return length;
}
/*
int main(int argc, char const *argv[])
{
	printf("alma : %i\n",ft_strlen("alma"));
	printf("\"\" : %i\n",ft_strlen(""));
	printf("1 : %i\n",ft_strlen("1"));
	return 0;
}
*/