#include<iostream>
using namespace std;
bool evenodd(int n)
{
    if((n&1)==0)
    {
        return true;
    }
    else{
        return false;
    }
    
    }
int main(){
    int n;
    cout<<"Enter the value of n:";
    cin>>n;
    cout<<endl;
    bool ans=evenodd(n);
    if(ans)
    {
        cout<<"number is even";

    }
    else{
        cout<<"number is odd";
    }
    return 0;
}