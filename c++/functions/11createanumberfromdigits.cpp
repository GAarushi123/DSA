#include<iostream>
#include<math.h>
using namespace std;
void number(int n){
    int digits;
    int a=0;
cout<<"enter the digits:"<<" ";
   while(n--)
   {
    cin>>digits;
    a=a*10+digits;
   }
// while(n)
//    {cin>>digits;
    
//     a=a+digits*pow(10,n-1);
//     n--;
     
//    }
    cout<<endl;
    cout<<"the number formed is:"<<" "<<a;
}
int main(){
    int n;
    
    cout<<"enter the no of digits you want to enter:";
    cin>>n;
    cout<<endl;
    
    number(n);

}