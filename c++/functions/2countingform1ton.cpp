#include<iostream>
using namespace std;
void counting(int n){
    for(int i=1;i<=n;i++)
    {
        cout<<i<<endl;
    }

}
int main(){
    int a;
    cout<<"Enter the value of a:";
    cin>>a;
    counting(a);

}