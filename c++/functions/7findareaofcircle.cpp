#include<iostream>
using namespace std;
void area(int num){
    float areaofcircle;
    areaofcircle=  3.14*num*num;
    cout<<areaofcircle;
}
int main(){
    float radius;
    cout<<"Enter the value of radius:";
    cin>>radius;
    area(radius);
    return 0;
}