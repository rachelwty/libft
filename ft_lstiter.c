#include "libft.h"
#include <stdio.h>
#include <stdlib.h>

void ft_lstiter(t_list *lst, void (*f)(void *))
{
    while (lst)
    {
        f(lst->content);
        lst = lst->next;
    }
}

void print_content(void *content)
{
    printf("%s\n", (char *)content);
}

int main(void)
{
    t_list *head = malloc(sizeof(t_list));
    t_list *node2 = malloc(sizeof(t_list));

    head->content = "one";
    head->next = node2;

    node2->content = "two";
    node2->next = NULL;

    ft_lstiter(head, print_content);

    free(node2);
    free(head);
    return 0;
}