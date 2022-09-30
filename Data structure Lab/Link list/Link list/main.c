#include <stdio.h>
#include <stdlib.h>
struct node{
    int data;
    struct node *next;
};
int main() {
    struct node *head = NULL;
    struct node *second = NULL;
    struct node *third = NULL;
    
    head=malloc(sizeof(struct node));
    second=malloc(sizeof(struct node));
    third=malloc(sizeof(struct node));

    head->data=10;
    second->data=20;
    third->data=30;
    
    head->next=second;
    second->next=third;
    third->next=NULL;
    
    while (head!= NULL) {
        printf("%d->",head->data);
        head=head->next;
    }
    printf("\n");
    
//    printf("start = %d\n",head);
//    printf("data in start= %d\n",head->data);
//    printf("ponter in first node= %d\n",head->next);
//
//    printf("second= %d\n", second);
//    printf("data in second node= %d\n",second->data);
//    printf("pointer in second node= %d\n",second->next);
//
//    printf("Third= %d\n", third);
//    printf("data in third node= %d\n",third->data);
//    printf("pointer in third node= %d\n",third->next);
//
//    printf("[%d]->[%d][%d]->[%d][%d]->[%d][%d]\n",head,head->data,head->next,second->data,second->next,third->data,third->next);
    
    return 0;
}
