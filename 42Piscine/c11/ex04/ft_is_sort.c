/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_is_sort.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: myiu <marvin@42.fr>                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/15 19:36:31 by myiu              #+#    #+#             */
/*   Updated: 2024/07/15 19:59:13 by myiu             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int	ft_is_sort(int *tab, int length, int (*f)(int, int))
{
	int	i;
	int	sorted;

	i = 0;
	sorted = 1;
	while (i < length - 1 && sorted)
	{
		if ((*f)(tab[i], tab [i + 1]) < 0)
			sorted = 0;
		i++;
	}
	if (sorted != 1)
	{
		sorted = 1;
		i = 0;
		while (i < length - 1)
		{
			if ((*f)(tab[i], tab[i + 1]) > 0)
				return (0);
			i++;
		}
	}
	return (1);
}
/*
#include <stdio.h>
int        ft_tri(int a, int b)
{
    return (a - b);
}

int        main(void)
{
    static int    tabx[] = { 7, 6, 6, 6, 5, 5, 3, 2, 2, 1, 1, 0, 0 };
    int            length;

    length = 10;
    printf("%d\n", ft_is_sort(tabx, length, &ft_tri));
}*/
