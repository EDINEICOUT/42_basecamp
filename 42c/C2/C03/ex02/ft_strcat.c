/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcat.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ecoutinh <ecoutinh@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/30 02:47:39 by avalerio          #+#    #+#             */
/*   Updated: 2020/12/02 02:43:33 by ecoutinh         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strcat(char *dest, char *src)
{
	int i;
	int j;

	i = 0;
	j = 0;
	while (dest[i] != '\0')
	{
		i++;
	}
	while (src[j] != '\0')
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

char    *ft_strcat(char *dest, char *src);

int    main(void)
{
    char str1[50] = "1, 2, 3...";
    char str2[50] = " testando";
    char str3[50] = "1, 2, 3...";

    printf("c  : %s\n", strcat(str1, str2));
    printf("ft : %s\n", ft_strcat(str3, str2));
    printf("\n--------------\n");

}