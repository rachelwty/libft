#include <stdlib.h>

typedef struct s_list
{
	void			*content;
	struct s_list	*next;
}	t_list;

t_list	*ft_lstnew(void *content)
{
	t_list	*node;

	node = (t_list *)malloc(sizeof(t_list));
	if (!node)
		return (0);
	node->content = content;
	node->next = 0;
	return (node);
}
#include <stdio.h>

int	main(void)
{
	t_list *node;

	node = ft_lstnew("Delaware");
	if (node)
		printf("%s\n", (char *)node->content);
	free(node);
	return (0);
}