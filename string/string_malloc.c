/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   string_malloc.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bvan-der <bvan-der@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/18 15:58:17 by bvan-der          #+#    #+#             */
/*   Updated: 2022/11/22 13:33:21 by bvan-der         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../ft_printf.h"

char	*ft_strdup(const char *s1)
{
	size_t	src_size;
	char	*cpy;

	if (s1 == NULL)
		return (NULL);
	src_size = ft_strlen(s1) + 1;
	cpy = (char *)malloc(src_size * sizeof(char));
	if (cpy == NULL)
		return (NULL);
	ft_strlcpy(cpy, s1, src_size);
	return (cpy);
}

char	*ft_ctostr(int c)
{
	char	*str;

	str = (char *)malloc(2 * sizeof(char));
	if (str == NULL)
		return (NULL);
	str[0] = (char)c;
	str[1] = '\0';
	return (str);
}
