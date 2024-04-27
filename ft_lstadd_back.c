/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstadd_back.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: insoares <insoares@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/25 19:22:49 by insoares          #+#    #+#             */
/*   Updated: 2024/04/26 10:17:39 by insoares         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstadd_back(t_list **lst, t_list *new)
{
	t_list	*back;
	
	if (lst)
	{
		if (*lst)
		{
			back = ft_lstlast(*lst);
			back -> next = new;
		}
		else
			*lst = new;
	}
}
