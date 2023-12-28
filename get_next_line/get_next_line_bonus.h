/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line_bonus.h                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rtavabil <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/13 16:47:28 by rtavabil          #+#    #+#             */
/*   Updated: 2023/11/17 16:01:01 by rtavabil         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef GET_NEXT_LINE_BONUS_H
# define GET_NEXT_LINE_BONUS_H

# ifndef BUFFER_SIZE
#  define BUFFER_SIZE 42
# endif

# include <unistd.h>
# include <fcntl.h>
# include <stdlib.h>
# include <limits.h>

int		ft_strchr(char *s, int c);
char	*ft_strjoin(char *s1, char *s2);
int		ft_strlen(char *s);
void	*ft_memcpy(void *dest, const void *src, int n);
char	*get_next_line(int fd);
char	*ft_substr(char *s, int start, int len);
char	*get_next_line(int fd);

#endif
