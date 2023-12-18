/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line_bonus.h                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fbazaz <fbazaz@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/18 11:01:16 by fbazaz            #+#    #+#             */
/*   Updated: 2023/12/18 15:36:29 by fbazaz           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef GET_NEXT_LINE_BONUS_H
# define GET_NEXT_LINE_BONUS_H

# ifndef BUFFER_SIZE
#  define BUFFER_SIZE 42
# endif

# include <fcntl.h>
# include <limits.h>
# include <stdio.h>
# include <stdlib.h>
# include <unistd.h>

char	*get_next_line(int fd);
char	*ft_new_str(char *str);
char	*ft_fill(char *str);
char	*ft_read_line(int fd, char *str);
// utils
char	*ft_strjoin(char *s1, char *s2);
size_t	ft_strlen(char *s);
int		ft_strchr(char *s, int c);
char	*ft_strdup(char *str);

#endif