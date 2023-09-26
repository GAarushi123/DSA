#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"Enter the valus of n:";
    cin>>n;
    for(int row=0;row<n;row++)
   
    { char ch;
        for(int col=0;col<row+1;col++)
        {
            int num=col+1;
            ch =num+'A'-1;
            cout<<ch<<" ";
        }
        
        for(char b=ch-1;b>='A';b--)
        {
            cout<<b<<" ";
        }cout<<endl;

    }
    
}