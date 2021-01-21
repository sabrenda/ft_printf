/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sabrenda <sabrenda@student.21-school.ru    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/12/29 19:52:23 by sabrenda          #+#    #+#             */
/*   Updated: 2021/01/21 21:17:17 by sabrenda         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"
#include <stdio.h>

// void prov2(char **str)
// {
// 	if (**str + 1 == 'B')
// 	{
// 		printf("yes\n");
// 		printf("%c\n", **str);
// 		printf("%c\n", **str + 1);
// 		printf("yes\n");
// 	}
// 	else
// 		printf("no\n");

// }
// void prov(char **str)
// {
// 	prov2(str);
// }
int main()
{
	// int		x = 900;
	// int		a = 0;
	// float	i = 3.14;
	// double	lf = 3.14;
	// char	*str;
	// char	*str2 = "(null)";
	// char	c = 'A';

	// str = (char *)malloc(sizeof(char) * 8);
	// int l = 128;
	// scanf("%s", str);
	// printf("%s\n", str);
	// prov(&str);
	// printf("%#.f", i); //float
	// x = ft_printf("");
	// printf("%020.10\n", c);
	// x = printf("%c\n", c);//char
	// a = printf("%.-*s\n",2, str);
	// a = printf("%10c\n", c);
	// a = ft_printf("%10c\n", c);
	// printf("%d\n", a);
	// a = ft_printf("\%\n");
	// printf("%d\n", a);
	int res;
	int a = -4, b = 0, i = 8, j = -12, l = 0, k = 123456789, m = -123456789, c = 48, e = -2147483648, d = 2147483647;
	// res = printf("%1.0u, %1.0x, %1.0X, %1.0u, %1.0x, %1.0X, %1.0u, %1.0x, %1.0X, %1.0u, %1.0x, %1.0X, %1.0u, %1.0x, %1.0X, %1.0u, %1.0x, %1.0X, %1.0u, %1.0x, %1.0X, %1.0u, %1.0x, %1.0X", a, b, i, a, b, i, a, b, i, a, b, j, a, b, j, a, b, j, a, b, k, a, b, k, a, b, k, a, b, l, a, b, l, a, b, l, a, b, m, a, b, m, a, b, m, a, b, c, a, b, c, a, b, c, a, b, d, a, b, d, a, b, d, a, b, e, a, b, e, a, b, e);
	// 	printf("\n%d\n", res);
	// res = ft_printf("%1.0u, %1.0x, %1.0X, %1.0u, %1.0x, %1.0X, %1.0u, %1.0x, %1.0X, %1.0u, %1.0x, %1.0X, %1.0u, %1.0x, %1.0X, %1.0u, %1.0x, %1.0X, %1.0u, %1.0x, %1.0X, %1.0u, %1.0x, %1.0X", a, b, i, a, b, i, a, b, i, a, b, j, a, b, j, a, b, j, a, b, k, a, b, k, a, b, k, a, b, l, a, b, l, a, b, l, a, b, m, a, b, m, a, b, m, a, b, c, a, b, c, a, b, c, a, b, d, a, b, d, a, b, d, a, b, e, a, b, e, a, b, e);
	// 	printf("\n%d\n", res);

	int ress = 22;
		a = printf("%010x\n", -20);
			printf("%d\n" , a);
		a = ft_printf("%010x\n", -20);
			printf("%d\n" , a);


	// a = ft_printf("%-0i, %-0d, %-0d, %-0d, %-0d, %-0d, %-0d, %-0d", 8, -12, 123456789, 0, -12345678, 97, -2147483648, 2147483647);
	// printf("[ft_printf]\n");
	// a = ft_printf("printf = %010c\n", c);
	// printf("%d\n", a);
	// printf("[printf]\n");
	// a = printf("printf = %010c\n", c);
	// printf("%d\n", a);

	//x = printf("%.7s\n", "1234567891011121314");
	//printf("%d\n", x);
	//printf("%.100f\n", f);
	//printf("%08.5i\n", a);
	return (0);
}
