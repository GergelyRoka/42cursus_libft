/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: groka <groka@student.42berlin.de>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/07 16:37:55 by groka             #+#    #+#             */
/*   Updated: 2022/12/07 16:37:55 by groka            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strchr(char *s, int c)
{
	int	i;

	i = 0;
	while(s[i] != '\0' && s[i] != c)
		++i;
	if (c == '\0' || c == s[i])
		return &s[i];
	return NULL;
}

/*
int main(int argc, char const *argv[])
{
	char s[] = "fasz";

	printf("%i", NULL == '\0');
	return 0;
}
*/