#include <stdio.h>
#include <stdlib.h>
#include <string.h>

typedef struct _Node
{
    char data;
    struct _Node* next;
}Node;

void delete(Node *);

int main()
{
    Node *head, *tail,*p;
    head = (Node *)malloc(sizeof(Node));
    head->next = NULL;
    char c;
    c = getchar();
    while(c != ' ' && c!= '\t' && c != '\n')
    {
        p = (Node *)malloc(sizeof(Node));
        p->data = c;
        if(!(head->next))
        {
            head ->next = p;
            tail = p;
        }
        else
        {   
            tail->next = p;
            tail = tail->next;
        }

        c = getchar();
    }
    tail->next = NULL;
    for(p = head->next;p;p = p->next)
    printf("%c", p->data);
    printf("\n");
    delete(head);
    for(p = head->next;p;p = p->next)
    printf("%c", p->data);
    return 0;
}


void delete(Node *head)
{
    char c;
    int flag = 0;
    c = getchar();
    Node *p,*q;
    for(q=head,p = head->next; p; p=p->next,q = q->next)
    {
        if(p->data == c)
        {
            q->next = p->next;
            flag = 1;
            break;
        }
    }
    if(!flag)
    {
        p = (Node*)malloc(sizeof(Node));
        q->next = p;
        p->data = c;
        p->next = NULL;
    }
}