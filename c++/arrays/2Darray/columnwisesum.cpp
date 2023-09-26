#include<iostream>
using namespace std;
void columnwisesum(int arr[][4],int row,int col)
{
    for(int i=0;i<col;i++){
        int sum=0;
        for(int j=0;j<row;j++)
        {
            sum=sum+arr[j][i];
        }
        cout<<"The sum of column"<<" "<<i<<"is :"<<sum<<endl;
    }
}
int main(){
    int arr[3][4]={
        {1,2,3,4},{11,22,33,44},{70,80,90,100}
    };
    int row=3;
    int col=4;
    columnwisesum(arr,row,col);
return 0;
}