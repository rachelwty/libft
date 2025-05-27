#include "libft.h"
#include <stdlib.h>
#include <stdio.h>

t_list	*ft_lstnew(void *content)
{
	t_list *node = malloc(sizeof(t_list));
	if (!node)
		return (0);
	node->content = content;
	node->next = 0;
	return (node);
}
void	ft_lstadd_front(t_list **lst, t_list *new)
{
	if (!new)
		return;
	new->next = *lst;
	*lst = new;
}
int	main(void)
{
	t_list *head = 0;

	ft_lstadd_front(&head, ft_lstnew("one"));
	ft_lstadd_front(&head, ft_lstnew("two"));

	printf("%s\n", (char *)head->content);
	printf("%s\n", (char *)head->next->content);
	return (0);
}