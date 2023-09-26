#include<iostream>
using namespace std;
void evenodd(int num){
    if(num%2==0)
    {
        cout<<"even"<<endl;
    }
    else{
        cout<<"odd"<<endl;
    }
}
int main(){
    int a;
    cout<<"Enter the value of a:";
    cin>>a;
    evenodd(a);
    return 0;
}