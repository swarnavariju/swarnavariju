#include<iostream>
using namespace std;
int main()
{
    int n,org_num,rev=0,rem;

    cout<<"enter a number"<<endl;
    cin>>n;

    org_num=n;

    while(n!=0)
    {
        rem=n%10;
        rev=rev*10+rem;
        n/=10;

    }
    if(org_num==rev)
    {
        cout<<rev<<" is a pallindrome number"<<endl;
    }
    else{
         cout<<rev<<" is not a pallindrome number"<<endl;
    }

    return 0;
}