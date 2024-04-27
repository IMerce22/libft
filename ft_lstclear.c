/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstclear.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: insoares <insoares@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/26 11:34:24 by insoares          #+#    #+#             */
/*   Updated: 2024/04/27 18:17:44 by insoares         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstclear(t_list **lst, void (*del)(void*))
{
	t_list	*temp;
	
	if(lst)
	{
		while (*lst)
		{
			temp = (*lst) ->next;
			ft_lstdelone(*lst, del);
			*lst = temp;
		}
		*lst = 0;
	}		
}
/* int	main(void)
{
	int		content;
	t_list	*node1;
	t_list	*current;
	
	
	node1 = malloc(sizeof(t_list));
	node1 ->next = malloc(sizeof(t_list));
	node1 ->next ->next = malloc(sizeof(t_list));
	
	node1 ->content = (int *)42;
	node1 ->next ->content = (int *)1337;
	node1 ->next ->next = NULL;
	
	current = node1;
	while (current)
	{
		printf("%d\n", *current ->content);
		current = current ->next;
	}
	ft_lstclear(current, del(current ->content));
	while (current)
	{
		printf("%d\n", current ->content);
		current = current ->next;
	}
} */