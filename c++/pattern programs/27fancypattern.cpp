#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"Enter the value of n:";
    cin>>n;
    int k=1;
    for(int row=0;row<n;row++)
    { 
        for(int col=0;col<2*row+1;col++)
        {  
            if(col%2==0){
            cout<<k<<" ";
           k++;
            }
            else{
                cout<<"* ";
            }
        }
        
        cout<<endl;
    }

    for(int row=0;row<n;row++)
    {
        for(int col=(2*n)-(2*row)-2;col>=0;col--)
        {  
            if(col%2==0)
            {
             cout<<k-1<<" ";
             k--;
            }
            else{
                cout<<"* ";
            }
        }
        cout<<endl;
    }
}