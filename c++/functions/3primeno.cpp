#include<iostream>
using namespace std;
//if number is prime it will return true 
//if number is not prime it will return false
bool primenumber(int n){
    for(int i=2;i<n/2;i++)
    {
        if(n%i==0)
        { //any number divisible by other than 1 and itself is not a prime no thus return false
            return false;
        }
       
    }
 return true;
}
int main(){
    int a;
    cout<<"Enter the value of a:";
    cin>>a;
    bool prime=primenumber(a);
    if(prime
    )
    {
        cout<<"number is prime"<<endl;

    }
    else{
        cout<<"number is not prime"<<endl;
    }
}