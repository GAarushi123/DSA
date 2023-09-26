#include<iostream>
using namespace std;
void miles(float km)
{
    float miles=km /1.609;
    cout<<"The "<<km<<" "<<" km to miles is "<<miles<<" "<<"miles";
}
int main(){
    float km;
    cout<<"Enter the km:";
    cin>>km;
    cout<<endl;
    miles(km);
    return 0;
}