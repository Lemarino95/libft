/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstlast.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lemarino <lemarino@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/24 18:26:06 by lemarino          #+#    #+#             */
/*   Updated: 2025/01/25 19:03:37 by lemarino         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstlast(t_list *lst)
{
	if (!lst)
		return (NULL);
	while (lst -> next != NULL)
		lst = lst -> next;
	return (lst);
}

/* int	main()
{
	t_list	*node;
	char	*content;

	node = malloc(sizeof(t_list));
	node -> content = "Disney inferno ";
	node -> next = malloc(sizeof(t_list));
	node -> next -> content = "e' il paese dei balocchi ";
	node -> next -> next -> next = NULL;
	node = ft_lstlast(node);
	printf("%s\n", (char *)node -> content);
} */
// Returns the last node of the list.