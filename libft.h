/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   libft.h                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: groka <groka@student.42berlin.de>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/07 16:38:51 by groka             #+#    #+#             */
/*   Updated: 2022/12/07 16:38:51 by groka            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef LIBFT_H
#define LIBFT_H

#include <stdio.h>
#include <string.h>
#include <ctype.h>


int		ft_isalpha(int c);
int		ft_isdigit(int c);
int		ft_isalnum(int c);
int		ft_isascii(int c);
int		ft_isprint(int c);
size_t	ft_strlen(const char *s);
void	*ft_memset(void *s, int c, size_t n);
void	ft_bzero(void *s, size_t n);
void	*ft_memcpy(void *dest, const void *src, size_t n);
void	*ft_memmove(void *dest, const void *src, size_t n);
size_t	strlcpy(char *dst, const char *src, size_t dsize);
// strlcat

int		ft_toupper(int c);
int		ft_tolower(int c);
char	*ft_strchr(char *s, int c);
// • strrchr
// • strncmp
void	*ft_memchr(const void *s, int c, size_t n); //tested
int		ft_memcmp(const void *s1, const void *s2, size_t n);
// • strnstr
int		ft_atoi(char *str);

// • calloc
// • strdup 

#endif /* LIBFT_H */
