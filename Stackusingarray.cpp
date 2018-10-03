#include<iostream>
#include<stdlib.h>
#define max 5
using namespace std;

int top=-1;
class stack
{
   int a[max];
   public:
       void push();
       void pop();
       void traverse();
};

void stack::push()
{
    if(top==(max-1))
    {
        cout<<"Overflow";
    }

    else
    {
        int c;
        cin>>c;
        top++;
        a[top]=c;
    }

}

void stack::pop()
{
    int ele;
    if(top==-1)
    {
        cout<<"Underflow";
    }
    else
    {
        ele=a[top];
        cout<<ele;
        top--;
    }
}

void stack::traverse()
{
    if(top==-1)
    {
        cout<<"Stack is empty";
    }
    else
    {
        for(int i=0;i<=top;i++)
        {
            cout<<a[i];
        }
    }
    }


int main()
{
stack s;
int ch;
while(1)
{
    cout<<"Enter your choice"<<endl;
    cout<<"1.Push in array"<<endl;
    cout<<"2.Pop in array"<<endl;
    cout<<"3.Traverse"<<endl;
    cout<<"Press any other key to exit"<<endl;

    cin>>ch;
    switch(ch)
    {
    case 1:
        s.push();
        break;
    case 2:
        s.pop();
        break;
    case 3:
        s.traverse();
        break;
    default:
        exit(0);
    }

}
}
