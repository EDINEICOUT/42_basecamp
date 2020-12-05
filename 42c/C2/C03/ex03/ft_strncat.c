/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ecoutinh <ecoutinh@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/30 16:51:36 by avalerio          #+#    #+#             */
/*   Updated: 2020/12/02 02:49:06 by ecoutinh         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strncat(char *dest, char *src, unsigned int
{
	unsigned int i;
	unsigned int j;

	i = 0;
	j = 0;
	while (dest[i] != '\0')
	{
		i++;
	}
	while (src[j] != '\0' && j < nb)
	{
		dest[i] = src[j];
		i++;
		j++;
	}
	dest[i] = '\0';
	return (dest);
}

#include <stdio.h>
#include <string.h>

char    *ft_strncat(char *dest, char *src, unsigned int nb);

int    main(void)
{
    char str1[50] = "1, 2, 3...";
    char str2[50] = " testando";
    char str3[50] = "1, 2, 3...";


    printf("c  : %s\n", strncat(str1, str2, 4));
    printf("ft : %s\n", ft_strncat(str3, str2, 4));
    printf("\n--------------\n");

}