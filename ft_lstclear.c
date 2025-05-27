#include <stdlib.h>
#include <stdio.h>

typedef struct s_list
{
    void            *content;
    struct s_list   *next;
}   t_list;

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

void del(void *content)
{
    free(content);
}

int main(void)
{
    t_list *head = 0;

    head = malloc(sizeof(t_list));
    head->content = malloc(3);
    ((char *)head->content)[0] = 'H';
    ((char *)head->content)[1] = 'i';
    ((char *)head->content)[2] = '\0';
    head->next = 0;

    ft_lstclear(&head, del);
    if (head == 0)
        printf("List cleared\n");

    return 0;
}