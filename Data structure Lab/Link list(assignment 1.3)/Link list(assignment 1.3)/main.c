#include<stdio.h>
#include<stdlib.h>

struct node
{
    int data;
    struct node *next;
};
void print_node(struct node *head);
void delete_node(struct node *head, int position);
void print_node(struct node *head)
{
    struct node *temp = head;
    while (temp!=NULL)
    {
        printf("%d ->",temp->data);
        temp = temp->next;
        
    }
    printf("NULL\n\n");
}
void delete_node(struct node *head, int position)
{
    struct node *num_1 = head;
    if(position==1)
    {
    //now head points to 2nd node
    head = num_1->next;
    free(num_1);
    }
    else
    {
    for(int i=0; i < position-2; i++)
    {
        //num_1 points to(n-1)th node
        num_1 = num_1->next;
    }
        struct node *num_2 = num_1->next; //n th node
        num_1->next = num_2 ->next;//(n+1)th node
        free(num_2);
    }
    printf("\nLinked list after  deletion: ");
    print_node(head);
}

int main()
{
    int position, value;
    struct node *first = NULL;
    struct node *second = NULL;
    struct node *third = NULL;
    struct node *fourth = NULL;
    struct node *fifth = NULL;
    first = (struct node*)malloc(sizeof(struct node));
    second = (struct node*)malloc(sizeof(struct node));
    third = (struct node*)malloc(sizeof(struct node));
    fourth = (struct node*)malloc(sizeof(struct node));
    fifth = (struct node*)malloc(sizeof(struct node));
    first->data = 10;
    second->data = 20;
    third->data = 30;
    fourth->data = 40;
    fifth->data = 50;
    first->next = second;
    second->next = third;
    third->next = fourth;
    fourth->next = fifth;
    fifth->next = NULL;

    printf("\nLinked list before deletion: ");
    print_node(first);//called function for print
    printf("Position to delete : ");
    scanf("%d",&position);

    delete_node(first, position);//called function for insertion

    return 0;
}
