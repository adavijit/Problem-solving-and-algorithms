#include<bits/stdc++.h>
using namespace std;
void display(stack<int> disp)
{
    while(!disp.empty())
            {
                cout << disp.top() << " ";
                disp.pop();
            }
}
int main()
{
    stack<int> s1,s2;
    s1.push(5);
    s1.push(6);
    s1.push(1);
    s1.push(2);
    s1.push(3);
    s1.push(4);
    s1.push(9);
    while (1)
    {
        cout <<endl<< "1.Enqueue"<<endl << "2.Dequeue" <<endl << "3.Display" << endl << "4.Exit";
        cout << endl;
        int ch;
        cin >> ch;
        switch (ch)
        {
        case 1:
            cout << "Enter any number to insert :";
            int n;
            cin >> n;
            s1.push(n);
            break;
        case 2:
            if(s1.empty()){
             cout << endl<< "No element found in queue";
             break;
            }
            while(!s1.empty())
            {
                s2.push(s1.top());
                s1.pop();
            }
            cout << s2.top() << " has been deleted";
            s2.pop();
            while(!s2.empty())
            {
                s1.push(s2.top());
                s2.pop();
            }
            break;
        case 3:
            display(s1);
            break;
        case 4:
            exit(0);
        default:
            break;
        }
    }
    
    return 0;
}