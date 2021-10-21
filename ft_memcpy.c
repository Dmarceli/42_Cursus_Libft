/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dmarceli <dmarceli@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/21 11:08:43 by dmarceli          #+#    #+#             */
/*   Updated: 2021/10/21 14:40:45 by dmarceli         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memcpy(void *str1, const void *str2, size_t n)
{
	size_t	i;

	i = 0;
	while (i < n)
	{
		((unsigned char *)str1)[i] = ((unsigned char *)str2)[i];
		i++;
	}
	return (str1);
}

// int main(void)
// {
// 	char	src[50] = "daniggrande";
// 	char	dest[50];
// 	char	*ret;
// 	printf("%s", ft_memcpy(dest, src, 6));
// 	return (0);
// }
