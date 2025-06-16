//comment added
#include<stdio.h>
#define MAX 5
struct stack{
    int a[MAX];
    int top;
};
void push(struct stack *,int);
int pop(struct stack *);
int peek(struct stack *);
void display(struct stack *);
void menu(void);

main()
{
    int choice,data;
    struct stack s;

    s.top=-1;
    while(1)
    {
        menu();
        printf("enter the choice=");
        scanf("%d",&choice);

        switch(choice)
        {
        case 1:
            printf("enter the element to push=");
            scanf("%d",&data);
            push(&s,data);
            break;
        case 2:
            data=pop(&s);
            printf("popped data=%d\n",data);
            break;
        case 3:
            data=peek(&s);
            printf("peeked data=%d\n",data);
            break;
        case 4:
            display(&s);
            break;
        default :
            exit(0);
        }
    }
}
void menu(void)
{
    printf("\nMENU\N");
    printf("1.Push\n");
    printf("2.Pop\n");
    printf("3.Peek\n");
    printf("4.Display\n");
}
void push(struct stack *p,int data)
{
    if(p->top==MAX-1)
    {
        printf("stack overflow...\n");
        return;
    }
    p->a[p->top++]=data;
}
int pop(struct stack *p)
{
    if(p->top==-1)
    {
        printf("stack underflow...\n");
        return -1;
    }
    return p->a[p->top--];
}

int peek(struct stack *p)
{
    if(p->top==-1)
    {
        printf("stack underflow...\n");
        return -1;
    }
    return p->a[p->top];
}
void display(struct stack *p)
{
    int i;
    if(p->top==-1)
    {
        printf("stack underflow...\n");
        return;
    }
    for(i=0;i<=p->top;i++)
    {
        printf("%d ",p->a[i]);
    }
}

