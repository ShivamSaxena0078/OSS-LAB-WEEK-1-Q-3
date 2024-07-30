#include <iostream>

using namespace std;

int main()
{
    string a;string b;
    cin>>a;
    for(int i=a.length()-1;i>=0;i--)
    {
        b=b+a[i];
    }
    cout<<b;
}
