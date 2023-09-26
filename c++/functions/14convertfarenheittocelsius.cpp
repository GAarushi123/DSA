#include<iostream>
using namespace std;
void celsius(float fahrenheit)
{
  float celsius=(fahrenheit-32)*5/9;
cout<<"the temp in celsius is:"<<celsius;
}

int main()
{
    float fahrenheit;
    cout<<"Enter the temperature in fahrenheit:";
    cin>>fahrenheit;
    cout<<endl;
    celsius(fahrenheit);
    return 0;
}