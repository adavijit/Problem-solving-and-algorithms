#include<iostream>
#include<cstdio>
#include<cstdlib>
using namespace std;
/*
 * Node Declaration
 */
struct Node
{
    int data;
    struct Node *next;
};
struct Node* head;
void insert(int num)
{
    struct Node* temp = (struct Node*)malloc(sizeof(struct Node));
    temp->data=num;
    temp->next=head;
    head= temp;
}
void operation()
{
    struct Node* temp = head;
    struct Node* temp2 = head;
    while(temp!=NULL)
    {
        
        while(temp2->data%2==0)
        {

        }
    }
}
void reverse()
{
    struct Node *prev,*current,*next;
    prev= NULL;
    current = head;
    while (current!=NULL)
    {
        if(current->data%2==0)
        {
        next = current->next;
       current->next= prev;
       prev = current;
       current = next;
        }
        else{
            current= current->next;
        }
    }
    head = prev;
    
}
void print()
{
    struct Node* temp = head;
    while (temp!=NULL)
    {
       printf("%d->",temp->data);
       temp=temp->next;
    }
    
}
int main()
{
    int n;
    cin >> n;
    head=NULL;
    for(int i=0;i<n;i++)
    {
        int x;
        cin >> x;
        insert(x);
    }
    reverse();
    print();
    
    return 0;
}