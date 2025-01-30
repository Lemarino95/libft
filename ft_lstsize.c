/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstsize.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lemarino <lemarino@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/24 14:37:16 by lemarino          #+#    #+#             */
/*   Updated: 2025/01/24 19:22:03 by lemarino         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_lstsize(t_list *lst)
{
	size_t	count;
	t_list	*tmp;

	tmp = lst;
	count = 0;
	while (tmp)
	{
		count++;
		tmp = tmp -> next;
	}
	return (count);
}

/* t_list	*ft_lstnew(void *content)
{
	t_list	*new_node;

	new_node = malloc(sizeof(t_list));
	if (!new_node)
		return (NULL);
	new_node -> content = content;
	new_node -> next = NULL;
	return (new_node);
}

int main()
{
	char	content;
	t_list	*nnode;

	content = "Tommaso wants to do everything";
	nnode = ft_lstnew(content);
	if (!nnode)
		printf("Nonnode");
	printf("Number of nodes: %d\n", ft_lstsize(nnode));
	while (nnode)
	{
		printf("%s\n", (char *)nnode -> content);
		nnode = nnode -> next;
		printf("Next: %p\n", nnode);
	}
} */
// Counts the number of nodes in a list.