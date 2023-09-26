#include<iostream>
#include<vector>
using namespace std;

// int main(){
//     int n;
//     cin>>n;
//     int *arr=new int[n];
//     for(int i=0;i<n;i++)
//     {
//         cin>>arr[i];
//         cout<<" ";
//     }
//     cout<<endl;
//     cout<<"The elements of the array are:"<<endl;
//     for(int i=0;i<n;i++)
//     {
//     cout<<arr[i]<<" ";
    
//     }

//     }
void print(vector<int>v)
{
    int size=v.size();
    for(int i=0;i<size;i++)
    {
        cout<<v[i]<<endl;
    }
}
int main(){
    vector<int>v;
    int n;
    cin>>n;
    for(int i=0;i<n;i++)
    {
        int d;
        cin>>d;
        v.push_back(d);
    }
    print(v);
}