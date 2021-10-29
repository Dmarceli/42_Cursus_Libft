/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmapi.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dmarceli <dmarceli@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/29 17:22:00 by dmarceli          #+#    #+#             */
/*   Updated: 2021/10/29 17:24:27 by dmarceli         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strmapi(char const *s, char (*f)(unsigned int, char))
{
	char	*sr;
	int		i;

	i = 0;
	sr = malloc((ft_strlen(s) + 1) * sizeof(char));
	if (!sr)
		return (0);
	while (s[i])
	{
		sr[i] = (*f)(i, s[i]);
		i++;
	}
	sr[i] = '\0';
	return (sr);
}
