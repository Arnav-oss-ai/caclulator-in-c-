#include<iostream>
using namespace std;
int main()
{
    int a;
    cout<< "enter 1st value = ";
    cin>>a;
    cout<<endl;
    int b;
    cout<<"enter 2nd value = ";
    cin>>b;
    cout<<endl;
    char sign;
    cout<<"what you you want to do with these values ? ";
    cin>>sign;
 
    switch(sign)
    {
        case '*':
        cout<<"result = "<<a*b<<endl;
        break;
        
        case '+':
        cout<<"result = "<<a+b<<endl;
        break;
        case '-':
        cout<<"result = "<<a-b<<endl;
        break;
        case '/':
        cout<<"result = "<<a/b<<endl;
        break;
        
        default:
        cout<<"enter another operator"<<endl;
        break;
        
    }  
}
