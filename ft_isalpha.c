/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isalpha.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: groka <groka@student.42berlin.de>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/07 16:35:57 by groka             #+#    #+#             */
/*   Updated: 2022/12/07 16:35:57 by groka            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_isalpha(int c)
{
	return ((c >= 65 && c <= 90) || (c >= 97 && c <= 122));
}
/*
int main(int argc, char const *argv[])
{
	printf("%i",ft_isalpha('Z'));
	printf("%i",ft_isalpha('A'));
	printf("%i",ft_isalpha('a'));
	printf("%i",ft_isalpha('z'));
	printf("%i",ft_isalpha('.'));
	return 0;
}
*/