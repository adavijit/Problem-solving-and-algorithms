/* HackerEarth link :
https://www.hackerearth.com/practice/data-structures/linked-list/singly-linked-list/practice-problems/algorithm/reversed-linked-list-01b722df/
*/
#include <bits/stdc++.h>
using namespace std;
struct Node {
long long data;
struct Node *next;
};
struct Node* head = NULL;
void insert(long long new_data) {
struct Node* new_node = (struct Node*) malloc(sizeof(struct Node));
new_node->data = new_data;
new_node->next = head;
head = new_node;
}
void display() {
struct Node* ptr;
ptr = head;
while (ptr != NULL) {
cout<< ptr->data <<" ";
ptr = ptr->next;
}
}
int main() {
long long n,x,y,a;
stack <long long>s;
vector <long long>v;
cin>>n;
while(n--)
{
cin>>x;
insert(x);
}
struct Node* ptr;
ptr = head;
while (ptr != NULL) {
y=ptr->data;
ptr = ptr->next;
if(y%2!=0){
if(a>0)
{
for(int i=a-1;i>=0;i--)
{
s.push(v[i]);
}

}

s.push(y);
v.clear();
a=0;
}
else {
a++;
v.push_back(y);
}
}
for(int i=0;i<a;i++)
{
cout<<v[i]<<" ";
}
while(!s.empty())
{
cout<<s.top()<<" ";
s.pop();
}

return 0;
}