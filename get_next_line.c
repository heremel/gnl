/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: melferre <melferre@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/01 16:47:49 by melferre          #+#    #+#             */
/*   Updated: 2024/12/01 17:10:05 by melferre         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "get_next_line.h"

char *get_next_line(int fd)
{
	int	verif;
	char c;
	static char *str;
	int i;

	verif = 1;
	c = '0';
	i = 0;
	while (verif > 0)
	{
		verif = read(fd, &c, 1);
		//str[i] = c;
		i++;
	}
}
