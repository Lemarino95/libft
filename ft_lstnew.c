/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstnew.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lemarino <lemarino@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/22 19:14:10 by lemarino          #+#    #+#             */
/*   Updated: 2025/01/24 19:21:48 by lemarino         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstnew(void *content)
{
	t_list	*new_node;

	new_node = malloc(sizeof(t_list));
	if (!new_node)
		return (NULL);
	new_node -> content = content;
	new_node -> next = NULL;
	return (new_node);
}

/*
int main()
{
	char	*content;
	t_list	*nnode;

	content = "Tommaso wants to do everything";
	nnode = ft_lstnew(content);
	if (!nnode)
		printf("!nnode");
	while (nnode)
	{
		printf("%s\n", (char *)nnode -> content);
		nnode = nnode->next;
		printf("Next: %p\n", nnode);
	}
	free(nnode);
}*/
/* Allocates (with malloc()) and returns a new node.
The member variable ’content’ is initialized with
the value of the parameter ’content’. The variable
’next’ is initialized to NULL. */