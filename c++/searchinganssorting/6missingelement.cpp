#include<iostream>
#include<vector>
using namespace std;
int missingnumber(vector<int>arr,int n)
{
int start=0;
int end=n-1;
int ans=-1;
while(start<=end)
{
    int mid=start+(end-start)/2;
    if(arr[mid]-mid==1)
    {
        start=mid+1;
    }
    else {
      ans=mid;
      end=mid-1;
    }
}

if(ans+1==0)
{
    return n+1;
}
return ans+1;
}
int main(){
    vector<int>arr={1,2,3,4,5,6,7,8,9} ;
    int n=arr.size();
    cout<<"the missing number is :";
    int sol=missingnumber(arr,n);
    cout<<sol;
    
    return 0;
}