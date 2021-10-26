/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dmarceli <dmarceli@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/26 13:09:01 by dmarceli          #+#    #+#             */
/*   Updated: 2021/10/26 17:08:32 by dmarceli         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strjoin(char const *s1, char const *s2)
{
	char	*res;
	int		size;

	size = ft_strlen(s1) + ft_strlen(s2) + 1;
	res = ft_calloc(size, 1);
	if (!s1 && !s2)
		return (0);
	if (!s1)
		return ((char *)s2);
	if (!s2)
		return ((char *)s1);
	if (res)
	{
		ft_strlcat(res, s1, size);
		ft_strlcat(res, s2, size);
		return (res);
	}
	return (0);
}

int main()
{
 char    *string;
 string = ft_strjoin("ola", " tudo bem?");
 printf("%s\n", string);
 free(string);
 return 0;
}