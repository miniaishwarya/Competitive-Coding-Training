// IMPLEMENTATION OF LINKED LIST AND IT'S APPLICATIONS

#include<stdio.h>
#include<stdlib.h>
#include<stdbool.h>   // Just for boolean datatype

struct Node
{
    
    int val;
    struct Node *next;
    //Node(x):val(x),next(NULL) {};
}*head;

 int size=1;

/** Traversing through the linked list. **/
void Traverse(struct Node *head)
{
    struct Node *ptr=NULL;
    ptr=head;
    if(ptr==NULL)
    {
        exit(0);
    }

    while(ptr->next!=NULL)
    {
        printf(" Value ----- %d \n ",ptr->val);
        ptr=ptr->next;
    }
    printf("Value ----- %d",ptr->val);
    printf("\n");

}  

/* ----- Creating a new node ----- */
struct  Node *GETNODE(int value)
{
    struct Node *ptr=NULL;
    ptr=(struct Node*)malloc(sizeof(struct Node));
    ptr->val=value;
    ptr->next=NULL;
    return ptr;
}

/* ---- To add a new node at the head. ---*/
void addAtHead(int val)
{
    struct Node *new_node=NULL;
    new_node=GETNODE(val);
    new_node->next=head;
    head=new_node;
    size++;        
}

/* ---- To add a new node at the tail. ---*/
void addAtTail(int val)
{
    struct Node *ptr=NULL;         // for traversing through the linked list
    
    struct Node *new_node=NULL;
    new_node=GETNODE(val);
    
    ptr=head;

    while(ptr->next!=NULL)
    {
        ptr=ptr->next;
    }
    ptr->next=new_node;
    size++;
}    

/* ----- Add a node of value val before the index-th node in the linked list.
If index equals to the length of linked list, the node will be appended to the end of linked list.
If index is greater than the length, the node will not be inserted. ----- */
void addAtIndex(int index, int val)
{
    if(index>size)
    {
        printf(" ERROR !!!!! Index out of range. ");
        return ;
    }

    if(index==size)
    {
        addAtTail(val);
        return ;
    }
 
    struct Node *ptr=NULL;      // for traversing 
    struct Node *new_node=NULL;
    new_node=GETNODE(val);
    ptr=head;

    for(int i=0; i<index-1;i++)
    {
        ptr=ptr->next;
    }
    new_node->next=ptr->next;
    ptr->next=new_node;
    size++;
    
}

 /** Delete the index-th node in the linked list, if the index is valid. */
void deleteAtIndex(int index)
{
    if(index>size)
    {
        printf(" ERROR !!!!! Index out of range. ");
        return ;
    }
    
    int i=0;
    struct Node *ptr=NULL;
    ptr=head;

    while(i<index-1)
    {
        ptr=ptr->next;
        i++;
    }

    ptr->next=ptr->next->next;
    size--;
       
    return ;
}

/** Get the value of the index-th node in the linked list. If the index is invalid, return -1. */
int get(int index)
{
    if(index>size)
    {
        printf(" ERROR !!!!! Index out of range. ");
        return 0;
    }

    int i=0;

    struct Node *ptr=NULL;
    ptr=head;

    while(i<index-1)
    {
        ptr=ptr->next;
        i++;
    }
    return ptr->val;    
}

/* ----- To find the middle element in the linked list. ------ */
int Middle_element(struct Node* head)
{
    struct Node* fast_ptr=NULL;
    struct Node* slow_ptr=NULL;
    fast_ptr=head;
    slow_ptr=head;

    while(fast_ptr!=NULL && fast_ptr->next!=NULL)
    {
        fast_ptr=fast_ptr->next->next;
        slow_ptr=slow_ptr->next;
    }
   return slow_ptr->val;
}   

/* ----- To remove the nth node from the end of the list -----*/
void Remove_nth_node(struct Node* head, int n)
{
    struct Node* ptr=NULL;
    ptr=head;

    if(n>size)
    {
        printf("ERROR!!!!!!!!!!!");
        return ;
    }    
    int i=0;

    while(i<size-n-1)
    {
        ptr=ptr->next;
        i++;
    }
    ptr->next=ptr->next->next;
    size--;
}

/* ----- To reverse the linked list ----- */
void Reverse(struct Node *head)
{
    struct Node *prev=NULL;
    struct Node *curr=NULL;
    curr=head;

    while(curr!=NULL)
    {
        struct Node *temp=curr->next;
        curr->next=prev;
        prev=curr;
        curr=temp;
    }
    head=prev;
    Traverse(head);
}
    
/* ----- To delete an element from the linked list given it's value -----*/    
void Delete_Linked_List_Elements(struct Node *head,int n)
{
    struct Node *curr=NULL;
    struct Node *prev=NULL;
    curr=head;
 
    while(curr->next!=NULL)
    {
        if(curr->next->val==n)
        {
            curr->next=curr->next->next;
            size--;
        }
        else
        {
            curr=curr->next;
        }
    }    
}
 
int main()
{

 int i=1;

 head=NULL;
 struct Node *np = NULL;
 struct Node *np1 = NULL;
 np=GETNODE(0);
 head=np;
 while(size<5)
 {
     np1=GETNODE(i++);
     np->next=np1;
     np=np1;
     size++;
 }

 Traverse(head);
/*
 addAtHead(10);

 printf("----------Updated--------- \n");
 Traverse(head);

*/
 //addAtTail(30);

 //printf("----------Updated--------- \n");
 //Traverse(head);


 //addAtIndex(4,30);
 //addAtIndex(6,30);
 //addAtIndex(2,30);

 //printf("----------Updated--------- \n");
 //Traverse(head);

/*
 deleteAtIndex(4);

 printf("----------Updated--------- \n");
 Traverse(head);
*/

/*
int index;
index=get(10);
printf("%d",index);
*/


//printf("\n Size of linked list:  %d ",size);

/*int n;
printf(" Enter the nth node to be deleted:");
scanf("%d",&n);
Remove_nth_node(head,n);
*/
//Traverse(head);

//printf("\n Size of linked list:  %d ",size);

Reverse(head);

//Delete_Linked_List_Elements(head,30);

//printf("----------Updated--------- \n");
//printf("\n Size of linked list:  %d ",size);

Traverse(head);

//printf("Middle element is --- %d",Middle_element(head));
}