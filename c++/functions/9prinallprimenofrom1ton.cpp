#include<iostream>
using namespace std;
bool primenumber(int n)
{
for(int i=2;i<n;i++)
{
     if(n%i==0)
     {
        return false;
     }  
}
return true;
}
int main(){
    int n;
    cout<<"Enter the values of n:";
    cin>>n;
    cout<<endl;
    for(int i=1;i<=n;i++)
    {
   bool isiprime=primenumber(i);
    if(isiprime)
    {
        cout<<i<<" ";
    }
    
    }
   
    return 0;
}