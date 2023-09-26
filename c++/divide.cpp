#include<iostream>
using namespace std;
int getquotient(int divisor,int dividend)
{ int s=0; 
int e=dividend;
int ans=-1;
    while(s<=e)
    {
        int mid=s+(e-s)/2;
   if(   mid*divisor==dividend )
   return mid;
   else if( mid*divisor<dividend)
   {
    ans=mid;
   e=mid+1;}
   else{
    e=mid-1;
   }
   
    }
    return ans;
}
int main(){
    int divisor=7;
    int dividend=29;
    int answer=getquotient(abs(divisor),abs(dividend));
    if((divisor<0||dividend<0))
    {
        answer=0-answer;
    }
    cout<<"final ans is:"<<answer;
}