#include<iostream>
using namespace std;
void printarray(int array[],int size)
{
    for(int i=0;i<size;i++)
    {
        cout<<array[i]<<" ";
    }
    cout<<endl;
}
int main(){
    int array[5]={1,3,5,7,9};
    int size=5;
    printarray(array,size);     
//     int arr[101];
//     char brr[10];
//     bool flag[227];
//     long num[100];
//     short  snum[100];
//   cout<<"array created succesfully"<<endl;


// int a=5;
// cout<<"address of a:"<<&a<<endl;
// cout<<"Size of a"<<sizeof(a)<<endl;
//   int array[100];
//  cout<<"The base address of array is:"<<&array<<endl;
//      cout<<"The base address of array is:"<<array<<endl;
//       cout<<"Size of array:"<<sizeof(array)<<endl;
      
// int arr[]={2,3,4,5,6};
// int brr[5]={1,2,3,4,5};
// int crr[5]={1,2};
//  int drr[2]={1,2,3};    -> this shows error 
    //   int arr[50]={1,2,3,4,5};
    //   int n=5;
    // for(int i=0;i<n;i++)
    // {
    //     cout<<arr[i]<<" ";
    // }
    //   int arr[5];
    // //   taking input
    //   for(int i=0;i<5;i++)
    //   {
    //     cout<<"Enter the values"<<endl;
    //     cin>>arr[i];  
    //     cout<<endl;  
    //   }
    // //   printing an array
    //   cout<<"pritning the array"<<endl;
    //   for(int i=0;i<5;i++ )
    //   {
    //     cout<<arr[i]<<" ";
    //   }
      
      
//       int arr[10];
//       for(int i=0;i<10;i++)
//       {
//         cin>>arr[i];
//         cout<<" ";
//       }
//       cout<<endl;
// cout<<"printing array before double up"<<endl;
    //   for(int i=0;i<10;i++){
    //  cout<<arr[i]<<" ";
    
    //   }
      
    //   for(int i=0;i<10;i++){
    //     arr[i]=2*arr[i];
    //   }
    //   cout<<endl;
    //    cout<<"printing array after double up"<<endl;
    //    for(int i=0;i<10;i++){
    //  cout<<arr[i]<<" ";
    //   }
      
// int arr[5];
//       for(int i=0;i<5;i++)
//       {
//         cin>>arr[i];
//         cout<<" ";
//       }
//       cout<<endl;
      
//        for(int i=0;i<5;i++){
//      cout<<arr[i]<<" ";
    
//       }
//       int sum=0;
//       for(int i=0;i<5;i++)
//       {
//         sum=sum+arr[i];
        
//       }
//       cout<<endl; 
//       cout<<sum;
//
// void printarray(int arr[],int size)
// {
//     for(int i=0;i<size;i++)
//     {
//         cout<<arr[i]<<" ";
//     }
//     cout<<endl;
// }
// int main()
// { 
//     int arr[5]={1,2,3,4,5};
//     int size=5;
//     printarray(arr,size);

// }
       return 0;
} 