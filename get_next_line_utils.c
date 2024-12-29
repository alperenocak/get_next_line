/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line_utils.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yuocak <yuocak@student.42kocaeli.com.tr    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/18 14:41:29 by yuocak            #+#    #+#             */
/*   Updated: 2024/12/25 17:38:36 by yuocak           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include "get_next_line.h"

int	ft_strlen(const char *s)
{
	int	i;

	i = 0;
	while (s[i] != '\0')
		i++;
	return (i);
}

char	*ft_strchr(const char *s, int c)
{
	while (*s != (char)c)
	{
		if (!*s)
			return (NULL);
		s++;
	}
	return ((char *)s);
}

char	*ft_strdup(char *str)
{
	char	*buffer;
	char	*res;

	if (!str)
		return (NULL);
	buffer = malloc(ft_strlen(str) + 1);
	if (!buffer)
		return (NULL);
	res = buffer;
	while (*str)
		*buffer++ = *str++;
	*buffer = '\0';
	return (res);
}

char	*ft_strjoin(char *s1, char *s2)
{
	char	*buffer;
	char	*res;
	char	*tmp;

	if (!s1 && !s2)
		return (NULL);
	if (!s1)
		return (ft_strdup(s2));
	if (!s2)
		return (ft_strdup(s1));
	buffer = malloc(ft_strlen(s1) + ft_strlen(s2) + 1);
	if (!buffer)
		return (NULL);
	tmp = s1;
	res = buffer;
	while (*s1)
		*buffer++ = *s1++;
	while (*s2)
		*buffer++ = *s2++;
	*buffer = '\0';
	free (tmp);
	return (res);
}
