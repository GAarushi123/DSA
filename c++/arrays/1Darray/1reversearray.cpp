#include<iostream>
#include<limits.h>
using namespace std;
void reversearray(int arr[],int size)
{
    int left=0;
    int right=size-1;
    while(left<=right)
    {
        swap(arr[left],arr[right]);
        left++;
        right--;
    }
    cout<<"The reverse of array is:"<<" ";
    for(int i=0;i<size;i++)
    {
        cout<<arr[i]<<" ";
    }
    cout<<endl;
}
int main(){
    int arr[6];
    int size=6;
    cout<<"Enter the elements of an arrray:"<<endl;
    for(int i=0;i<size;i++)
    {
        cin>>arr[i];
        cout<<" ";
    }
    cout<<endl;
    reversearray(arr,size);
}
