#include<iostream>
using namespace std;
int sumofrow(int arr[][4],int row,int col)
{
for(int i=0;i<row;i++)
{
    int sum=0;
    for(int j=0;j<col;j++)
    {
        sum=sum+arr[i][j];
        
    }
    cout<<"the sum of row"<<i<<" " <<"is:"<<sum<<endl;
}
}
int main(){
    int arr[3][4]={
        {1,2,3,4},{11,22,33,44},{70,80,90,100}
    };
    int row=3;
    int col=4;
    sumofrow(arr,row,col);
return 0;
}