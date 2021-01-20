/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main2.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sabrenda <sabrenda@student.21-school.ru    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/01/18 06:45:56 by sabrenda          #+#    #+#             */
/*   Updated: 2021/01/18 06:51:09 by sabrenda         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#include <stdio.h>

int main(void)
{
	int count;

	printf ("this%20n is a test\n", &count);
	printf ("%d", count);
	return 0;
}
