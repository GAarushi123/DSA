#include<iostream>
#include<limits.h>
using namespace std;
int findmax(int arr[][4],int row,int col)
{
    int maxans=INT_MIN;
    for(int i=0;i<row;i++)
    {
        for(int j=0;j<col;j++)
        {
            if(arr[i][j]>maxans)
            {
                maxans=arr[i][j];
            }
        }
    }
return maxans;
}
int findmin(int arr[][4],int row,int col){
    int minans=INT_MAX;
    for(int i=0;i<row;i++)
    {
        for(int j=0;j<col;j++)
        {
            if(arr[i][j]<minans)
            {
                minans=arr[i][j];
            }
        }
    }
return minans;
}
int main(){
    int arr[3][4]={
        {1,2,3,4},
        {
            11,22,33,44
        },{10,20,30,40}
    };
    int row=3;
    int col=4;
     cout<<"min element:"<<findmin(arr,row,col)<<endl;
     cout<<"max element:"<<findmax(arr,row,col);
}