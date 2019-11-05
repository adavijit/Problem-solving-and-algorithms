#include<bits/stdc++.h>
using namespace std;
struct Node{
    struct Node* next;
    int data;
};
Node *start = NULL;

Node* createNode()
{
    Node* temp;
    temp = new Node;
    return temp;
}
void printList()  
{  
    Node* temp =start;
    while (temp != NULL)  
    {  
        cout<<temp->data << " ";  
        temp = temp->next;  
    }  
    cout << endl;
}
void deleteEnd()
{
    Node *temp2;
    Node *temp1;
    temp1= start;
    temp2= start;
    while (temp1->next!=NULL)
    {
        temp2= temp1;
        temp1=temp1->next;
    }
    if(temp1==start)
    start=NULL;
    else 
    temp2->next=NULL;
    cout << "Deleted "<<temp1->data << " from the list" << endl;
    
}
void deleteFront()
{
    if(start==NULL){
        cout << "No data in the list" << endl;
        return;
    }
    cout << "Deleted "<<start->data << " from the list" << endl;
    start= start->next;
    
}
void insertFornt(int num)
{
    Node *temp2;
    Node *temp = createNode();
    temp->data=num;
    temp->next=NULL;
    if(start == NULL)
    {
        start=temp;
    }
    else{
        temp->next=start;
        start=temp;
    }
    
}
void insertEnd(int num)
{
    Node *temp2;
    Node *temp = createNode();
    temp->data=num;
    temp->next=NULL;
    if(start == NULL)
    {
        start=temp;
    }
    else{
        temp2= start;
        while (temp2->next!=NULL)
        {
           temp2=temp2->next;
        }
        temp2->next= temp;
        
    }
}
void cycles()
{

}
void insertNth(int num,int index)
{
    int x=0;
    Node *temp;
    temp=start;
    int check=0;
    Node *newNode = createNode();
    newNode->data=num;
    while (temp->next!=NULL)
    {
        x++;
        if(x==index)
        {
            newNode->next=temp->next;
            temp->next=newNode;
            check=1;
        }
    temp=temp->next;
    }
    if(check==0)
    {
        insertEnd(num);
    }
    
}
void deleteNth()
{

}
void reverseList()
{
    Node *curr,*prev,*next;
    prev= NULL;
    curr = start;
    while(curr!=NULL)
    {
        next = curr->next;
        curr->next=prev;
        prev=curr;
        curr=next;
    }
    start = prev;
}
int main()
{
    int num,index;
    while(1)
    {
        cout << "1. Insert End" << endl;
        cout << "2. Insert Front" << endl;
        cout << "3. Delete End" << endl;
        cout << "4. Delete Front" << endl;
        cout << "5. Insert Nth" << endl;
        cout << "6. Delete Nth" << endl;
        cout << "7. Reverse list" << endl;
        cout << "8. No. of cycles" << endl;
        cout << "9. Display" << endl;
        cout << "10. Exit" << endl;
        int n;
        cin >> n;
        switch (n)
        {
        case 1:
            cout << "Enter number to inserted at the end : ";
            cin >> num;
            insertEnd(num);
            break;
        case 2:
            cout << "Enter number to inserted at the front : ";
            cin >> num;
            insertFornt(num);
            break;
        case 3:
            deleteEnd();
            break;
        case 4:
            deleteFront();
            break;
        case 5:
            cout << "Enter the number of node after which new node will be inserted : ";
            cin >> index;
            cout << "Enter number to inserted after "  << index << " : ";
            cin>> num;
            insertNth(num,index);
            break;
        case 6:
            deleteNth();
            break;
        case 7:
            reverseList();
            break;
        case 8:
            cycles();
            break;
        case 9:
            printList();
            break;
        case 10:
            exit(0);
        default:
            break;
        }
    }
    
    return 0;
}