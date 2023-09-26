#include<iostream>
using namespace std;
// que 1- function to print sum of three no
// void sum(int a,int b,int c){
//     int ans=a+b+c;
//   cout<<"sum is:"<<ans<<endl;
// }


// int main()
// { 
//     sum(1,2,7);
//     return 0;

// }
// que 2- to return sum of three no
// int sum(int a, int b,int c){
//     int ans=a+b+c;
//     return ans;
// }
// int main(){

//   int sums=sum(4,4,5);
//     cout<<"sum is:"<<sums<<endl;
    
// }
// que 3-find max of a ,b,c
// void max(int num1,int num2,int num3 )
// {
//  if(num1>=num2 && num1>=num3){
//     cout<<"max is num1"<<num1<<endl;
//  }
//  else if(num2>=num1 && num2>=num3){
//     cout<<"max is num2"<<num2<<endl;
//  }
//  else{
//     cout<<"max is num3"<<num3<<endl;
//  }
// }
// int main(){
//     max(3,3,1);
// }
int printmax(int n1,int n2,int n3){
    int ans=max(n1,n2);
    int finalans=max(ans,n3);
    return finalans;
    // cout<<"max number is"<<finalans<<endl;
}
int main(){
   int MAX= printmax(2,32,4);
    cout<<"max number is"<<MAX<<endl;
    return 0;
}