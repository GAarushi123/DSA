#include<iostream>
using namespace std;
void digitsofinteger(int n)
{
   
   while(n!=0)
    {
        int a=n%10;
        n=n/10;
        cout<<a<<" ";
    }
    
}
int main(){
    int n;
    cout<<"enter the integer n:";
    cin>>n;
    cout<<endl;
    digitsofinteger(n);
    return 0;
}
