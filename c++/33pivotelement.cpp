#include<iostream>
#include<vector>
using namespace std;
int  findpivot(vector<int>arr,int n){
int start=0;
int end=n-1;

while(start<=end)
{  int mid=start+(end-start)/2;
    if(arr[start]==arr[end])
return start;
    if(arr[mid-1]>arr[mid])
    return mid-1;
    else if(arr[mid]<arr[mid+1])
return mid;
else if(arr[start]>arr[mid])
      end=mid-1;
    else{
        start=mid+1;
    }
}
return -1;
}
int binarysearch(vector<int>arr,int start,int end,int target)
{

    while(start<=end)
    {
        int mid=start+(end-start)/2;
         if(arr[mid]==target)
         {
              return mid;
         }
         else if(arr[mid]<target)
         {
            start=mid+1;
         }
         else{
            end=mid-1;
         }
    }
    return -1;

}
int search(vector<int>arr,int n,int target)
{
    int pivot=findpivot(arr,n);
    int ans=-1;
    if(target>=arr[0]&&target<=arr[pivot]){
           ans=binarysearch(arr,0,pivot,target);
    }
    else if(target>=arr[pivot+1] && target<=arr[n-1])
         ans=binarysearch(arr,pivot+1,n-1,target);
    return ans;     
}
int main(){
vector<int>arr;
arr.push_back(12);
arr.push_back(14);
arr.push_back(16);
arr.push_back(2);
arr.push_back(4);
arr.push_back(6);
arr.push_back(8);
arr.push_back(10);
int n=arr.size();
int pivot=findpivot(arr,n);
cout<<pivot;
return 0;
}