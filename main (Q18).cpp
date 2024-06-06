#include<iostream>
using namespace std;
int main()
{
    int a,i;
    cin>>a;
    for(int i=1;(a*i)<100;i++);
    {
        cout<<a*i;
    }
    return 0;
}