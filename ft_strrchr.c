/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dmarceli <dmarceli@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/24 15:25:05 by dmarceli          #+#    #+#             */
/*   Updated: 2021/10/28 15:01:00 by dmarceli         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrchr(const char *s, int c)
{
	char	*res;

	if (c == 0)
		return ((char *)s + (int)(ft_strlen(s)));
	res = 0;
	while (*s)
	{
		if (*s == (char)c)
			res = (char *)s;
		s++;
	}
	return (res);
}
