#include<iostream>
using namespace std;
void sumof(int num){
    int sum=0;
   for(int i=1;i<=num;i++)
   { 
     sum=sum+i;
    
   }
   cout<<sum;
}
int main(){
    int a;
    cout<<"Enter the value of a:";
    cin>>a;
     sumof(a);
    return 0;
}