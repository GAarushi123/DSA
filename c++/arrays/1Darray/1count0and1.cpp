#include<iostream>
using namespace std;
void countonezero(int arr[],int size)
{ int countone=0;
int countzero=0;
    for(int i =0;i<size;i++)
    {
        if(arr[i]==0)
        {
            countzero++;
        }
        if(arr[i]==1){
            countone++;
        }
    }
    cout<<"Zero count:"<<countzero<<endl;
    cout<<"one count:"<<countone<<endl;
}
int main(){
    int arr[]={1,0,1,0,0,0,1,0,1,0,1,0,0,1,1,1,0};
    int size=17;
    countonezero(arr,size);
}