/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ecoutinh <ecoutinh@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/29 22:48:18 by avalerio          #+#    #+#             */
/*   Updated: 2020/12/02 02:41:12 by ecoutinh         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_strncmp(char *s1, char *s2, unsigned int n)
{
	unsigned int i;

	i = 0;
	while (s1[i] != '\0' && s2[i] != '\0' && (n - 1) > i)
	{
		if (s1[i] != s2[i])
		{
			break ;
		}
		i++;
	}
	return (s1[i] - s2[i]);
}

#include <stdio.h>
#include <string.h>

int    ft_strncmp(char *s1, char *s2, unsigned int n);

int    main(void)
{
    char *str1;
    char *str2;
    char *str3;
    char *str4;

    str1 = "ABA";
    str2 = "AD";
    str3 = "ABA";
    str4 = "ABZ";
    printf("c  : %d\n", strncmp(str1, str2, 3));
    printf("ft : %d\n", ft_strncmp(str1, str2, 3));
    printf("\n--------------\n");
    printf("c  : %d\n", strncmp(str1, str4, 3));
    printf("ft : %d\n", ft_strncmp(str1, str4, 3));
    printf("\n--------------\n");
    printf("c  : %d\n", strncmp(str1, str3, 2));
    printf("ft : %d\n", ft_strncmp(str1, str3, 2));
}