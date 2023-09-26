#include<iostream>
#include<math.h>
using namespace std;
int reverseofnumber(int num)
{
int sum=0;
while(num!=0)
{
int rem=num%10;
sum=sum*10+rem;
num=num/10;
    }
    return sum;
}
int decimal(int n){
    int num;
    while(n!=0)
    
       num=n%2;
       int ans=reverseofnumber(num);
       cout<<ans<<" ";
               n=n/2;
    
}
int main(){
    int n;
    cout<<"Enter the decimal no n:";
    cin>>n;
    cout<<endl;
    cout<<"the binay representation of the decimal number n is :";
    decimal(n);
    
    
    return 0;
}