/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: Ahmed <Ahmed@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/12/29 19:52:23 by sabrenda          #+#    #+#             */
/*   Updated: 2021/01/12 02:18:58 by Ahmed            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

void prov2(char **str)
{
	if (**str + 1 == 'B')
	{
		printf("yes\n");
		printf("%c\n", **str);
		printf("%c\n", **str + 1);
		printf("yes\n");
	}
	else
		printf("no\n");

}
void prov(char **str)
{
	prov2(str);
}
int main()
{
	int		x = 900;
	int		a = 15;
	float	i = 3.14;
	double	lf = 3.14;
	char	*str = "ABCDE";
	char	*str2 = "123456789";
	char	c = 'A';

	// str = (char *)malloc(sizeof(char) * 8);
	//int l = 128;
	// scanf("%s", str);
	// printf("%s\n", str);
	prov(&str);
	// printf("%#.f", i); //float
	// x = ft_printf("");
	// printf("%020.10\n", c);
	//x = printf("%c\n", c);//char
	//a = printf("%.-*s\n",2, str);
	//printf("%d\n", a);

	//x = printf("%.7s\n", "1234567891011121314");
	//printf("%d\n", x);
	//printf("%.100f\n", f);
	//printf("%08.5i\n", a);
	return (0);
}
