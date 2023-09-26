#include<iostream>
using namespace std;
void sort(int arr[7],int size)
{ int j=0;
    for(int index=0;index<size;index++ )
    {
        if(arr[index]<0)
        {
            swap(arr[j],arr[index]);
            j++;
        }
    }
}
void print(int arr[],int size )
{
    for(int i=0;i<size;i++)
    {
        cout<<arr[i]<<" ";
    }
}
int main(){
    int arr[7]={23,-7,12,-10,-11,40,60};
    int size=7;
    cout<<"array before sorting:{";
    print(arr,size);
    cout<<" }";
    sort(arr,size);
    cout<<endl;
    cout<<"array after sorting:{";
    print(arr,size);
    cout<<"}";
    return 0;
} 