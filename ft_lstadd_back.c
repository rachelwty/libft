#include "libft.h"
#include <stdio.h>
#include <stdlib.h>

void ft_lstadd_back(t_list **lst, t_list *new)
{
    t_list *last;

    if (!lst || !new)
        return;
    if (*lst == 0)
    {
        *lst = new;
        return;
    }
    last = *lst;
    while (last->next != 0)
        last = last->next;
    last->next = new;
}
t_list  *ft_lstnew(void *content)
{
    t_list *node = (t_list *)malloc(sizeof(t_list));
    if (!node)
        return (0);
    node->content = content;
    node->next = 0;
    return (node);
}
int main(void)
{
    t_list *head = 0;

    ft_lstadd_back(&head, ft_lstnew("one"));
    ft_lstadd_back(&head, ft_lstnew("two"));
    ft_lstadd_back(&head, ft_lstnew("three"));

    t_list *tmp = head;
    while (tmp != 0)
    {
        printf("%s\n", (char *)tmp->content);
        tmp = tmp->next;
    }
    return 0;
}