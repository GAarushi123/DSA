#include<iostream>
using namespace std;
void printdiagonal(int arr[][4],int row,int col)
{
for(int i=0;i<row;i++)
{
cout<<arr[i][i]<<" ";
}
cout<<endl;
}
void printoppositediagonal(int arr[][4],int row,int col)
{
for(int i=0;i<row;i++){
    cout<<arr[i][row-i-1]<<" ";
}
cout<<endl;
}
int main(){
    int arr[4][4]={
        {1,2,3,4},{11,22,33,44},{70,80,90,100}
        ,{1,2,3,4}
    };
    int row=4;
    int col=4;
printdiagonal(arr,row,col);
printoppositediagonal(arr,row,col);

return 0;
}