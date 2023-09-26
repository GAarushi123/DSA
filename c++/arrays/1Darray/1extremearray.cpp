#include<iostream>
// #include<limits.h>
using namespace std;
// for odd no pf element in an array
void extremearray(int arr[],int size)
{ cout<<"The extreme array is:"<<" ";
    int left=0; 
    int right=size-1;
    while(left<=right)
    {
        if(left==right)
        {
        cout<<arr[left]<<" ";
        }
        else{
            cout<<arr[left]<<" ";
            cout<<arr[right]<<" ";
              
                    }
        left++;
        right--;            
    }

}
int main(){
    int arr[5];
    int size=5;
    cout<<"enter the vlaue of array:"<<" ";
    for(int i=0;i<size;i++)
    {
        cin>>arr[i];
        cout<<" ";
    }
    cout<<endl;
    extremearray(arr,size);
}

// // for even no of element in an array
// void extremearray(int arr[],int size)
// {    cout<<"the extreme array is:"<<" ";
//     int left=0;
//     int right=size-1;
//     while(left<right)
//     {
//         cout<<arr[left]<<" ";
//         cout<<arr[right]<<" ";
//         left++;
//         right--;
//     }
   
// }
// int  main(){
//     int arr[6];
//     int size=6;
//     cout<<"Enter the elements of arrray:"<<" ";
//     for(int i=0;i<size;i++)
//     {
//         cin>>arr[i];
//         cout<<" ";
//     }
//     cout<<endl;
//     extremearray(arr,size);
// }