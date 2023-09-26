#include<iostream>
using namespace std;
#include<vector>
bool linearsearch(vector<int>arr,int n,int target)
{
    for(int i=0;i<n;i++)
    {
        if(arr[i]==target)
        {
            return true;
        }
    }
    return false;
}
    int main(){
        vector<int>arr;
        int n;
        cout<<"enter the value of n:";
        cin>>n;
        cout<<endl;
        cout<<"enter the elements in array:";
        for(int i=0;i<n;i++){
            int d;
            cin>>d;
            arr.push_back(d);
        }
        cout<<endl;
        cout<<"enter the target";
        int target;
        cin>>target;
    bool ans=linearsearch(arr,n,target);
    if(ans)
    {
        cout<<"element found";

    }
    else{
        cout<<"element not found";
    }
return 0;

}