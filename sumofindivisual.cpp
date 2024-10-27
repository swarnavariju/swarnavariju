#include<iostream>
using namespace std;
int main()
{
    int n,sum=0,rem;

    cout<<"enter a number"<<endl;
    cin>>n;

    while(n!=0)
    {
        rem=n%10;
        sum=sum+rem;
        n/=10;

    }
    cout<<"sum of individual number :"<<sum<<endl;
    return 0;
}