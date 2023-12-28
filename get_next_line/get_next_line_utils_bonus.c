/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line_utils.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rtavabil <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/13 17:50:07 by rtavabil          #+#    #+#             */
/*   Updated: 2023/11/16 18:48:01 by rtavabil         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "get_next_line_bonus.h"

int	ft_strchr(char *s, int c)
{
	int		i;

	i = 0;
	if (!s)
		return (-1);
	if (c == '\0')
		return (ft_strlen(s) + 1);
	while (s[i])
	{
		if (s[i] == c)
			return (i);
		i++;
	}
	return (-1);
}

char	*ft_strjoin(char *s1, char *s2)
{
	char	*joined;
	int		i;
	int		j;

	if (!s1)
	{
		s1 = (char *)malloc(1 * sizeof(char));
		s1[0] = '\0';
	}
	if (!s1 || !s2)
		return (NULL);
	joined = (char *)malloc((ft_strlen(s1) + ft_strlen(s2) + 1) * sizeof(char));
	if (!joined)
		return (NULL);
	i = -1;
	j = 0;
	if (s1)
		while (s1[++i])
			joined[i] = s1[i];
	while (s2[j])
		joined[i++] = s2[j++];
	joined[ft_strlen(s1) + ft_strlen(s2)] = '\0';
	free(s1);
	return (joined);
}

int	ft_strlen(char *s)
{
	int	len;

	len = 0;
	if (!s)
		return (0);
	while (*s)
	{
		s++;
		len++;
	}
	return (len);
}

char	*ft_substr(char *s, int start, int len)
{
	char	*subs;
	int		i;

	if (start >= ft_strlen(s))
	{
		subs = malloc(1 * sizeof(char));
		if (!subs)
			return (NULL);
		subs[0] = '\0';
		return (subs);
	}
	if (ft_strlen(s) - start < len)
		len = ft_strlen(s) - start;
	subs = (char *)malloc((len + 1) * sizeof(char));
	if (!subs)
		return ((void *)0);
	i = 0;
	while (i < len && s[start + i])
	{
		subs[i] = s[start + i];
		i++;
	}
	subs[i] = '\0';
	return (subs);
}

void	*ft_memcpy(void *dest, const void *src, int n)
{
	char	*new_dest;
	char	*new_src;
	int		i;

	new_dest = (char *)dest;
	new_src = (char *)src;
	i = 0;
	while (i < n)
	{
		*(new_dest + i) = *(new_src + i);
		i++;
	}
	return (dest);
}
