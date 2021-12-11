/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line.h                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: emanuele <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/11 17:25:24 by emanuele          #+#    #+#             */
/*   Updated: 2021/12/11 17:25:26 by emanuele         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef GET_NEXT_LINE_H
#define GET_NEXT_LINE_H

#include <unistd.h>
#include <stdlib.h>

int ft_strlen(char *str);
char *ft_strchr(const char *str, int c);
char *ft_substr(char *s, int start, int len);
char *ft_strjoin(char *s1, char *s2);
char *ft_tail(char *tail, int *n);
char *ft_line(char *tail, int *n);
char *get_next_line(int fd);

#endif
