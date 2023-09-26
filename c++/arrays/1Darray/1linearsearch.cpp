#include<iostream>
using namespace std;
// true ->if element is present in array
// false->if element is not present in aaray
bool linearsearch(int arr[],int size,int target){
    for(int i=0;i<size;i++)
    {
        if(arr[i]==target)
        {
            return true;
        }
    }
    return false;

}
int main(){
    int arr[5]={1,2,3,4,5};
    int size=5;
    int target=2;
    bool ans=linearsearch(arr,size,target);
    if(ans==true)
    cout<<"target is found"<<endl;
    else
    cout<<"target not found"<<endl;

}

// int main(){                           // //   linear search using loop

//  int arr[5];
//  int size=5;
// cout<<"Enter the values of array:"<<endl;
//  for(int i=0;i<5;i++){
//      cin>>arr[i];
//      cout<<" ";
    
//       }
//       cout<<endl;
   
//       int target;
//       cout<<"Enter the target element:"<<endl;
//       cin>>target;
//       cout<<endl;
//       }
      
    //    for(int i=0;i<5;i++){
    //      if(arr[i]==target)
    //      {
    //         cout<<"linear search is successful"<<" "<<arr[i]<<endl;
    //      break;
    //      }
         
    //   }

//     //   linear search using flag variable

// int flag=0;
//       cout<<"Enter the values of array:"<<endl;
//  for(int i=0;i<5;i++){
//      cin>>arr[i];
//      cout<<" ";
    
//       }
//       cout<<endl;
//       int target;
//       cout<<"Enter the target element:"<<endl;
//       cin>>target;
//       cout<<endl;
//       for(int i=0;i<5;i++){
//         if(arr[i]==target)
//         {
//             flag=1;
//             break;
//         }
//       }
//       if(flag==1)
//       {
//         cout<<"Element found"<<endl;
//       }
//       else{ 
//         cout<<"Element not found"<<endl;
//       }

// return 0;
// }