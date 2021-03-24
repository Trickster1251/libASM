/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   libasm.h                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: walethea <walethea@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/20 21:06:08 by walethea          #+#    #+#             */
/*   Updated: 2021/03/23 19:27:47 by walethea         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef LIBASM_H
# define LIBASM_H

#include <stdio.h>
#include <string.h>
#include <unistd.h>
#include <stdlib.h>

size_t		ft_strlen(const char *str);
char		*ft_strcpy(char *dst, const char *src);
int			ft_strcmp(const char *s1, const char *s2);
size_t		ft_write(int fildes, const void *buf, size_t nbyte);
int         ft_isdigit(char num);
size_t		ft_read(int fildes, void *buf, size_t nbyte);
int        ft_bzero(char *str, int len);
char *      ft_strdup(const char *s1);

#endif