#include<iostream>
using namespace std;
int factorial(int n)
{ int fact=1;
  for(int i=1;i<=n;i++)
  {
    fact=fact*i;
  }
  return fact;
}
int main(){
int n;
cout<<"Entre the value of n:";
cin>>n;
cout<<endl;
int ans=factorial( n);
cout<<"the factorial of n is :"<<ans;
return 0;
}