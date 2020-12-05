/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ecoutinh <ecoutinh@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/12/01 03:14:19 by avalerio          #+#    #+#             */
/*   Updated: 2020/12/02 02:55:22 by ecoutinh         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strstr(char *str, char *to_find)
{
	int total_counter;
	int searcher;

	if (to_find[0] == '\0')
		return (str);
	total_counter = 0;
	while (str[total_counter] != '\0')
	{
		searcher = 0;
		while (to_find[searcher] != '\0')
		{
			if (str[total_counter + searcher] == to_find[searcher])
				searcher++;
			else
				break ;
		}
		if (to_find[searcher] == '\0')
			return (str + total_counter);
		total_counter++;
	}
	return (0);
}

#include <stdio.h>
#include <string.h>

char    *ft_strstr(char *str, char *to_find);

int    main(void)
{
    char str1[50] = "Olá como vai voce...teste";
    char str2[50] = "voce";


    printf("c  : %s\n", strstr(str1, str2));
    printf("ft : %s\n", ft_strstr(str1, str2));
    printf("\n--------------\n");

}