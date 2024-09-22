/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amuhsen <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/22 21:47:17 by amuhsen           #+#    #+#             */
/*   Updated: 2024/09/22 23:28:39 by amuhsen          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_memcmp(const void *s1, const void *s2, size_t n)
{
	const unsigned char *str1;
	const unsigned char *str2;
	
	str1=(const unsigned char *)s1;
	str2=(const unsigned char *)s1;
	
	while(n--)
	{
		if(*str1 != *str2)
			return(*str1 - *str2);
		str1++;
		str2++;
	}
	return(0);
}
