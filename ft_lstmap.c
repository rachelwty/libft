#include "libft.h"
#include <stdlib.h>
#include <stdio.h>

t_list *ft_lstnew(void *content)
{
    t_list *node = malloc(sizeof(t_list));
    if (!node)
        return NULL;
    node->content = content;
    node->next = NULL;
    return node;
}

void ft_lstclear(t_list **lst, void (*del)(void *))
{
    t_list *temp;
    if (!lst || !del)
        return;
    while (*lst)
    {
        temp = (*lst)->next;
        del((*lst)->content);
        free(*lst);
        *lst = temp;
    }
}

t_list *ft_lstmap(t_list *lst, void *(*f)(void *), void (*del)(void *))
{
    t_list *new_list = NULL;
    t_list *new_node;

    while (lst)
    {
        void *new_content = f(lst->content);
        new_node = ft_lstnew(new_content);
        if (!new_node)
        {
            ft_lstclear(&new_list, del);
            del(new_content);
            return NULL;
        }
        new_node->next = new_list;
        new_list = new_node;
        lst = lst->next;
    }

    t_list *prev = NULL;
    t_list *curr = new_list;
    t_list *next;
    while (curr)
    {
        next = curr->next;
        curr->next = prev;
        prev = curr;
        curr = next;
    }
    return prev;
}

void *duplicate_content(void *content)
{
    char *str = (char *)content;
    size_t len = 0;
    while (str[len])
        len++;
    char *copy = malloc(len + 1);
    if (!copy)
        return NULL;
    for (size_t i = 0; i <= len; i++)
        copy[i] = str[i];
    return copy;
}

void del(void *content)
{
    free(content);
}

int main(void)
{
    t_list *head = ft_lstnew("super");
    head->next = ft_lstnew("saiyan");

    t_list *mapped = ft_lstmap(head, duplicate_content, del);

    while (mapped)
    {
        printf("%s\n", (char *)mapped->content);
        t_list *temp = mapped;
        mapped = mapped->next;
        free(temp->content);
        free(temp);
    }

    free(head->next);
    free(head);
    return 0;
}