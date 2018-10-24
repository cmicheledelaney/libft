/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   search_str_in_array.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ccodiga <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/01/10 10:05:35 by ccodiga           #+#    #+#             */
/*   Updated: 2019/01/10 10:36:27 by ccodiga          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	search_str_in_array(char **array, char *string)
{
	int	i;

	i = -1;
	while (array[++i] != NULL)
	{
		if (ft_strstr(array[i], string) != NULL)
			return (i);
	}
	return (-1);
}
