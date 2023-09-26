#include<iostream>
#include<limits.h>
using namespace std;
void minimum(int arr[],int size)
{
    int minans=INT_MAX;
    for(int i=0;i<size;i++)
    {
        if(minans>arr[i])
        {
            minans=arr[i];
        }
    }
    cout<<"the minimum number is:"<<minans<<endl;
}
int main(){
    int arr[5];
    int size=5;
    cout<<"Enter the values in array"<<endl;
    for(int i=0;i<size;i++)
    {
        cin>>arr[i];
        cout<<" ";
    }
   minimum(arr,size);
}