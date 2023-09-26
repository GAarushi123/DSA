#include<iostream>
using namespace std;
void sumofeven(int num){
    int sum=0;
  for(int i=2;i<=num;i=i+2)
  {
    sum=sum+i;
  }  
  cout<<sum; 
}
int main(){
    int a;
    cout<<"Enter the value of a:";
    cin>>a;
    sumofeven(a);
    return 0;
}