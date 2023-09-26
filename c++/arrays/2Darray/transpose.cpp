#include<iostream>
using namespace std;
void print(int arr[][4],int row,int col)
{
    for(int i=0;i<row;i++)
    {
        for(int j=0;j<col;j++)
        {
            cout<<arr[i][j]<<" ";
        }
        cout<<endl;
    }
    
}
void transpose(int arr[][4],int row,int col)
{
    for(int i=0;i<row;i++)
    {
    for(int j=i;j<col;j++)
    {
        swap(arr[i][j],arr[j][i]);
    }
    }
}
void transposelowertriangle(int arr[][4],int row,int col )
{
for(int i=0;i<row;i++)
{
    for(int j=0;j<=i;j++)
    {
        swap(arr[i][j],arr[j][i]);
    }
}
}
int main(){
    int arr[4][4]={
        {1,2,3,4},{11,22,33,44},{70,80,90,100}
        ,{1,2,3,4}
    };
    int row=4;
    int col=4;
 transpose(arr,row,col);
 print(arr,row,col);
 transposelowertriangle(arr,row,col);
print(arr,row,col);
return 0;
}