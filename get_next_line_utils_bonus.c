/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line_utils_bonus.c                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fbazaz <fbazaz@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/18 11:02:59 by fbazaz            #+#    #+#             */
/*   Updated: 2023/12/18 15:24:13 by fbazaz           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "get_next_line_bonus.h"

size_t	ft_strlen(char *s)
{
	size_t	i;

	i = 0;
	while (s[i])
		i++;
	return (i);
}

char	*ft_strdup(char *str)
{
	size_t	size;
	int		i;
	char	*ptr;

	size = ft_strlen(str);
	i = 0;
	ptr = malloc((size + 1) * sizeof(char));
	if (ptr == NULL)
		return (NULL);
	while (str[i])
	{
		ptr[i] = str[i];
		i++;
	}
	ptr[i] = '\0';
	return (ptr);
}

char	*ft_strjoin(char *s1, char *s2)
{
	int		i;
	size_t	len1;
	char	*newstring;

	if (!s1 && !s2)
		return (NULL);
	if (!s1)
		return (ft_strdup(s2));
	if (!s2)
		return (ft_strdup(s1));
	len1 = ft_strlen(s1);
	newstring = malloc((len1 + ft_strlen(s2) + 1) * sizeof(char));
	if (!newstring)
		return (NULL);
	i = -1;
	while (s1[++i])
		newstring[i] = s1[i];
	i = -1;
	while (s2[++i])
	{
		newstring[len1] = s2[i];
		len1++;
	}
	newstring[len1] = '\0';
	return (free(s1), newstring);
}

int	ft_strchr(char *s, int c)
{
	int		i;
	int		len;
	char	*str;

	i = 0;
	len = ft_strlen(s);
	str = (char *)s;
	while (i <= len)
	{
		if (str[i] == (char)c)
			return (1);
		i++;
	}
	return (0);
}
