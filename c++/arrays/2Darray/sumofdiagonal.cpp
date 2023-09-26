#include<iostream>
using namespace std;
void sumofdiagonal(int arr[][4],int row,int col)
{int sum=0;
    for(int i=0;i<row;i++)

    {

        sum=sum+arr[i][i];
    }
    cout<<"the diagonal sum is:"<<sum<<endl;
}
void sumofoppositediagonal(int arr[][4],int row,int col)
{
    int sum=0;
    for(int i=0;i<row;i++)
    {
       sum=sum+arr[i][row-i-1];
    }
    cout<<"the diagonal sum is:"<<sum<<endl;

}
int main(){
    int arr[4][4]={
        {1,2,3,4},{11,22,33,44},{70,80,90,100}
        ,{1,2,3,4}
    };
    int row=4;
    int col=4;
    sumofdiagonal(arr,row,col);
    sumofoppositediagonal(arr,row,col);
return 0;
}