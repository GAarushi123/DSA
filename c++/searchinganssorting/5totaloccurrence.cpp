#include<iostream>
#include<vector>
using namespace std;
#include<iostream>
#include<vector>
using namespace std;
int findfirstocc(vector<int>arr,int n,int target){
    int start=0;
    int end=n-1;
    int answer=-1;
    while(start<=end)
    {
        // int mid=(start+end)/2; can cause integer overflow
        // so we use another approach
        int mid=start+(end-start)/2;
        if(arr[mid]==target)
        {
             answer=mid;
            end=mid-1;
        }
        else if(arr[mid]>target)
        {
            end=mid-1;
        }
        else{
            start=mid+1;
        }
    }
     return answer;
}
int lastocc(vector<int>arr,int n,int target){
    int start=0;
    int end=n-1;
    int answer=-1;
    while(start<=end)
    {
        // int mid=(start+end)/2; can cause integer overflow
        // so we use another approach
        int mid=start+(end-start)/2;
        if(arr[mid]==target)
        {
             answer=mid;
            start=mid+1;
        }
        else if(arr[mid]>target)
        {
            end=mid-1;
        }
        else{
            start=mid+1;
        }
    }
     return answer;
}
int findtotaloccurrence(vector<int>arr,int n,int target)
{
    int first=findfirstocc(arr,n,target);
   int last= lastocc(arr,n,target);
   int tc=last-first+1;
   return tc ;
}
int main(){
    int n;
    vector<int>arr;
    cout<<"Enter the value of n:";
    cin>>n;
    cout<<endl;
    cout<<"enter the elements:"<<" ";
    for(int i=0;i<n;i++)
    {
        int d;
        cin>>d;
        arr.push_back(d);
    }
    int target;
    cout<<"enter the target:";
    cin>>target;
    cout<<endl;
   int ans=findtotaloccurrence(arr,n,target);
   cout<<ans;
    return 0;

}