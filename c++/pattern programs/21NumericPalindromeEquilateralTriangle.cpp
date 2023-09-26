#include <iostream>
using namespace std;
int main()
{
    int n;
    cout << "Enter the value of n:";
    cin >> n;
    for (int row = 0; row < n; row++)
    { 
        int m;
        for(int col=0;col<n-row-1;col++)
        {
            cout<<" ";
        }
        for(int col=0;col<row+1;col++)
        {
            m=col+1;
            cout<<m;
        }
        for(int p=m-1;p>0;p--)
        {
            cout<<p;
        }
        cout<<endl;
    }
}