#include<iostream>
using namespace std;

bool linearsearch(int arr[][4],int row,int col,int target)
{
    for(int i=0;i<row;i++)
    {
        for(int j=0;j<col;j++)
        {
            if(arr[i][j]=target)
        {
            return true;
        }
        }
    }
    return false;
}
void print(int arr[][4],int row,int col)
{
    for(int i=0;i<row;i++)
    {
        for(int j=0;j<col;j++)
        {
            cout<<arr[i][j]<<" ";

        }
    }
    cout<<endl;
}
int main(){
    int arr[2][4]={
        {1,2,3,4},
        {11,22,33,44}
    };
    
    int row=2;
    int col=4; 
    print(arr,row,col);
    int target;
    cout<<"enter the target element you want to search:"<<" ";
    cin>>target;
    cout<<endl;
    cout<<"elment found or not:"<<linearsearch(arr,row,col,target)<<" ";
    
}