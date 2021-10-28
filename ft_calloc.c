/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dmarceli <dmarceli@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/24 18:06:46 by dmarceli          #+#    #+#             */
/*   Updated: 2021/10/28 17:39:53 by dmarceli         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_calloc(size_t count, size_t size)
{
	char			*ptr;
	unsigned int	i;

	i = 0;
	ptr = malloc(count * size);
	if (ptr == NULL)
		return (ptr);
	while (i < count)
	{
		ptr[i] = 0;
		i++;
	}
	ptr[i] = '\0';
	return (ptr);
}
