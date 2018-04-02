#include <stdlib.h>
#include <stdio.h>	
typedef struct Node
{
    int data;
    struct Node* next;
}Node;
Node* insert(Node *head,int data)
{
    //Complete this function
    struct Node* new_n =(struct Node*) malloc(sizeof(struct Node));
    new_n->data=data;
    if (head == NULL) head = new_n;
        else {
            struct Node* curr = head;
            while (curr->next) curr = curr->next;
            curr->next = new_n;
        }
        return head;
}
void display(Node *head)
{
	Node *start=head;
	while(start)
	{
		printf("%d ",start->data);
		start=start->next;
	}
}
int main()
{
	int T,data;
    scanf("%d",&T);
    Node *head=NULL;	
    while(T-->0){
        scanf("%d",&data);
        head=insert(head,data);
    }
  display(head);
		
}
