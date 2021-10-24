/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dmarceli <dmarceli@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/24 18:26:45 by dmarceli          #+#    #+#             */
/*   Updated: 2021/10/24 19:09:26 by dmarceli         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*strdup(const char *s1)
{
	int		i;
	int		len;
	char	*mal;

	i = 0;
	len = ft_strlen(s1);
	mal = malloc(sizeof((*s1) * (len)));
	while (i <= len)
	{
		mal[i] = s1[i];
		i++;
	}
	return (mal);
}
