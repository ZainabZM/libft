/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isdigit.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zamohame <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/04 12:12:06 by zamohame          #+#    #+#             */
/*   Updated: 2024/11/12 11:04:51 by zamohame         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include "libft.h"

int	ft_isdigit(int a)
{
	return ((a >= 48) && (a <= 57));
}
/*
int	main(void)
{
	printf("%d", ft_isdigit('0' - 1));
}
*/