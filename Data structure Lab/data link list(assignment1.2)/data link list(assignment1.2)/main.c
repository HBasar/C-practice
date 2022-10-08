#include<stdio.h>
#include<stdlib.h>

struct node
{
    int data;
    struct node *next;
};
void print_node(struct node *head);
void insert_node(struct node *head, int position, int value);

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
void insert_node(struct node *head, int position, int value)
{
    struct node *temp1 = (struct node*)malloc(sizeof(struct node));
    temp1->data = value;
    temp1->next = NULL;
    if(position==1)
    {
        temp1->next = head;
        head = temp1;
        
    }
    else
    {
        struct node *temp2 = (struct node*)malloc(sizeof(struct node));
        temp2 = head;
        for (int i = 0; i < position-2; i++)
        {
            temp2 = temp2->next;
            
        }
        temp1->next = temp2 ->next;
        temp2 ->next = temp1;
        
    }
    printf("\nLinked list  after insertion: ");
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
    printf("\nLinked list before insertion: ");
    print_node(first);//called function for print
    printf("Position to insert : ");
    scanf("%d",&position);
    printf("Enter the value    : ");
    scanf("%d",&value);
    insert_node(first, position, value);//called function for insertion
    return 0;
}
