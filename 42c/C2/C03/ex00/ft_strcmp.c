/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ecoutinh <ecoutinh@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/29 20:21:24 by avalerio          #+#    #+#             */
/*   Updated: 2020/12/02 02:34:57 by ecoutinh         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_strcmp(char *s1, char *s2)
{
	int i;

	i = 0;
	while (s1[i] != '\0' && (s1[i] == s2[i]))
	{
		i++;
	}
	return (s1[i] - s2[i]);
}

#include <stdio.h>
#include <string.h>

int    ft_strcmp(char *s1, char *s2);

int    main(void)
{
    char *str1;
    char *str2;
    char *str3;
    char *str4;

    str1 = "ABA";
    str2 = "AB";
    str3 = "ABA";
    str4 = "ABZ";
    printf("c  : %d\n", strcmp(str1, str2));
    printf("ft : %d\n", ft_strcmp(str1, str2));
    printf("\n--------------\n");
    printf("c  : %d\n", strcmp(str1, str4));
    printf("ft : %d\n", ft_strcmp(str1, str4));
    printf("\n--------------\n");
    printf("c  : %d\n", strcmp(str1, str3));
    printf("ft : %d\n", ft_strcmp(str1, str3));
}
