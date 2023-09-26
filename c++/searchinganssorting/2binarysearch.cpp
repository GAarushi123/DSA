#include<iostream>
#include<vector>
using namespace std;
bool binarysearch(vector<int>arr,int n,int target){
    int start=0;
    int end=n-1;
    while(start<=end)
    {
        int mid=(start+end)/2;
        if(arr[mid]==target)
        {
            return true;
            break;
        }
        else if(arr[mid]>target)
        {
            end=mid-1;
        }
        else{
            start=mid+1;
        }
    }
     return false;
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
   bool ans= binarysearch(arr,n,target);
    if(ans)
    {
        cout<<"element found"<<endl;
    }
    else{
        cout<<"element not found"<<endl;
    }
    return 0;

}