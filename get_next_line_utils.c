/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line_utils.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: emanuele <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/11 17:25:46 by emanuele          #+#    #+#             */
/*   Updated: 2021/12/11 17:25:53 by emanuele         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "get_next_line.h"

int ft_strlen(char *str)
{
	int i = 0;
	while (str[i])
		i++;
	return i;
}

char *ft_strchr(const char *str, int c)
{
	if (!str)
		return NULL;
	char *s = (char *)str;
	while (*s && *s != (unsigned char)c)
		s++;
	if (*s == (unsigned char)c)
		return s;
	return NULL;
}

char *ft_substr(char *s, int start, int len)
{
	int i = 0, j = 0;
	char *dest;
	dest = (char *)malloc(sizeof(char) * (len + 1));
	if (!dest)
		return NULL;
	while (s[i])
	{
		if (i >= start && j < len)
			dest[j++] = s[i];
		i++;
	}
	dest[j] = '\0';
	return dest;
}

char *ft_strjoin(char *s1, char *s2)
{
	if (!s1 || !s2)
		return NULL;
	int i = 0, j = 0;
	char *dest;
	dest = (char *)malloc(sizeof(char) * (ft_strlen(s1) + ft_strlen(s2) + 1));
	if (!dest)
		return NULL;
	while (s1[i])
	{
		dest[i] = s1[i];
		i++;
	}
	while (s2[j])
	{
		dest[i + j] = s2[j];
		j++;
	}
	free(s1);
	dest[i + j] = '\0';
	return dest;
}

char *ft_tail(char *tail, int *n)
{
	char *str = ft_substr(tail, *n + 1, ft_strlen(tail));
	free(tail);
	return str;
}

char *ft_line(char *tail, int *n)
{
	int i = 0;
	char *line;
	while (tail[i] != '\n' && tail[i])
		i++;
	line = ft_substr(tail, 0, i + 1);
	*n = i;
	return line;
}

