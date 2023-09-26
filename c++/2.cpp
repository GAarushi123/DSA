#include<iostream>
#include<vector>
using namespace std;
void function(vector<int>nums,int n)
{
    int positive=0;
    int negative=1;
    for(int i=0;i<n;i++)
    {
        if(nums[i]>=0)
        {
            swap(nums[positive],nums[i]);
            positive=positive+2;

        }
    }
    for(int i=1;i<n;i++)
    {
        if(nums[i]<0)
        {
             swap(nums[negative],nums[i]);
             negative=negative+2;
        }
    }
 
}
void print(vector<int>nums,int n)
{     
    for(int i=0;i<n;i++)
    {
        cout<<nums[i]<<" ";
    }
}
int main(){
    vector<int>nums={3,1,-2,-5,2,-4};

    int n=nums.size();
    function(nums,n);
    print(nums,n);
    
    return 0;
}