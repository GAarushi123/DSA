#include<iostream>
#include<vector>
using namespace std;
int binarysearch(vector<int>arr,int n,int target){
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
            //  right me jaynge ye  check krne ki element kabhi last ma pada ho
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
   int ans= binarysearch(arr,n,target);
    if(ans==-1)
    {
        cout<<"element not found"<<endl;
    }
    else{
        cout<<"element found :"<<" "<<ans<<endl;
    }
    return 0;

}