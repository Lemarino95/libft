/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstadd_back.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lemarino <lemarino@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/24 21:57:05 by lemarino          #+#    #+#             */
/*   Updated: 2025/01/26 15:58:40 by lemarino         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstadd_back(t_list **lst, t_list *new)
{
	t_list	*temp;

	if (!lst || !new)
		return ;
	if (*lst == NULL)
	{
		*lst = new;
		return ;
	}
	temp = *lst;
	while (temp -> next != NULL)
		temp = temp -> next;
	temp -> next = new;
	return ;
}

/* int	main()
{
	t_list	*node;
	// t_list	*new;
	char	*content;

	node = malloc(sizeof(t_list));
	node -> content = "Disney inferno ";
	node -> next = malloc(sizeof(t_list));
	node -> next -> content = "e' il paese dei balocchi ";
	node -> next -> next = malloc(sizeof(t_list));
	node -> next -> next -> content = "dove tutti i principi...";
	node -> next -> next -> next = NULL;
	// new = malloc(sizeof(t_list));
	// new -> content = "Qui e' divertimento sano per tutti i marmocchi!";
	ft_lstadd_back(&node, ft_lstnew("... diventano ranocchi!"));
	while (node != NULL)
	{
		printf("%s\n", (char *)node -> content);
		node = node -> next;
	}
} */
// Adds the node 'new' at the end of the list.