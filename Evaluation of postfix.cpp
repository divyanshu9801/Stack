#include<iostream>
#include<string.h>
#include<math.h>
using namespace std;
int top=-1;
int a[20];
char gettype(char s);
void evaluate(char t,int num1,int num2);
void push(int item);
int pop();
int main()
{
    char postfix[50];

    cin>>postfix;
    int l,i;
    int num1,num2,item;
    l=strlen(postfix);
    postfix[l]=')';
    for(i=0;postfix[i]!=')';i++)
    {
        if(postfix[i]==' '||postfix[i]=='\t')
        {
            continue;
        }
    switch(gettype(postfix[i]))
    {
    case 'o':
        num1=pop();
        num2=pop();
        evaluate(postfix[i],num1,num2);
        break;
    case 'z':
        item=postfix[i]-'0';
        push(item);
        break;
    }
    }
    cout<<a[top];
}
char gettype(char s)
{
    switch(s)
    {
    case '*':
        return 'o';
        break;
    case '/':
        return 'o';
        break;
    case '+':
        return 'o';
        break;
    case '-':
        return 'o';
        break;
    case '^':
        return 'o';
        break;
    default:
        return 'z';
        break;
    }
}
void push(int item)
{
    top+=1;
    a[top]=item;
}

int pop()
{
    int item=a[top];
    top--;
    //cout<<top;
    return(item);
}
void evaluate(char t,int num1,int num2)
{
    int result;
    switch(t)
        {
        case '*':
            result=num1*num2;
            break;
        case '+':
            result=num1+num2;
            break;
        case '-':
            result=num2-num1;
            break;
        case '/':
            result=num2/num1;
            break;
        case '^':
            result=pow(num2,num1);
            break;
        }
    push(result);
}


