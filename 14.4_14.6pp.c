#include <stdio.h>
#include <stdlib.h>


typedef struct _Node
{
    char data;
    struct _Node *next;
} Node;

typedef struct _List
{
    Node *head;
    Node *tail;
} List;

void delete(List *list);

int main()
{
    List list1;
    list1.head = NULL;
    list1.tail = NULL;
    char c;
    Node *p;
    c = getchar();
    while(c != ' ' && c!= '\t' && c != '\n')
    {
        p = (Node *)malloc(sizeof(Node));
        p->data = c;
        if(!list1.head)
        {
            list1.head = p;
            list1.tail = p;
        }
        else
        {
            list1.tail->next = p;
            list1.tail = list1.tail->next;
        }
        c = getchar();
    }
    list1.tail->next = NULL;
    for(p = list1.head;p;p = p->next)
    {
        printf("%c", p->data);
    }
    printf("\n");
    delete(&list1);
    for(p = list1.head;p;p = p->next)
    printf("%c", p->data);
    printf("\n");
    return 0;
}

void delete(List *list)
{
    char c;
    int isfound = 0;
    c = getchar();
    Node *p, *q;
    for(q = list->head,p = list->head->next; p;p = p->next,q = q->next)
    {
        if(list->head->data == c)
        {
            list->head = p;
            isfound = 1;
            break;
        }
        else
        if(p->data == c)
        {
            q->next = p->next;
            isfound = 1;
            break;
        }
    }
    if(!isfound)
    {
        p = (Node *)malloc(sizeof(Node));
        p->data = c;
        p->next = NULL;
        q->next = p;
    }
}

