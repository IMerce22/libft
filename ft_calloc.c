/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: insoares <insoares@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/19 10:42:17 by insoares          #+#    #+#             */
/*   Updated: 2024/04/20 16:44:23 by insoares         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdlib.h>

void	*ft_calloc(size_t count, size_t n)
{
	char	*str;
	size_t	space;
	size_t	i;

	if ((count > 2147483647 && n != 0)
		|| (count != 0 && n > 2147483647))
		return (NULL);
	space = count * n;
	str = malloc(space);
	if (!str)
		return (NULL);
	i = 0;
	ft_bzero(str, space);
	return (str);
}
/* int	main(void)
{
	ft_calloc(5, 0);
	printf("%d", (int *)ft_calloc);
	calloc (5, 0);
	printf("%d", calloc);
	return(0);
} */