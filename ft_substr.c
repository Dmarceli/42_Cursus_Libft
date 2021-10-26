/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dmarceli <dmarceli@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/24 19:26:08 by dmarceli          #+#    #+#             */
/*   Updated: 2021/10/26 13:00:29 by dmarceli         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	int		i;
	char	*cutstr;

	if (!s)
		return (NULL);
	cutstr = (char *)malloc(sizeof(char) * (len + 1));
	i = 0;
	while (len--)
	{
		cutstr[i] = s[start + i];
		i++;
	}
	cutstr[i] = '\0';
	return (ft_substr);
}
