#include <stdio.h>
#include <stdlib.h>

typedef struct s_list
{
	void			*content;
	struct s_list	*next;
}	t_list;

t_list	*ft_lstnew(void *content)
{
	t_list *node = malloc(sizeof(t_list));
	if (!node)
		return 0;
	node->content = content;
	node->next = 0;
	return node;
}

int	ft_lstsize(t_list *lst)
{
	int	count = 0;
	while (lst)
	{
		count++;
		lst = lst->next;
	}
	return count;
}
/*
int	main(void)
{
	t_list *head = 0;

	head = ft_lstnew("one");
	head->next = ft_lstnew("two");
	head->next->next = ft_lstnew("three");

	printf("%d\n", ft_lstsize(head));
	return 0;
}*/