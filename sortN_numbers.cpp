#include<iostream>
using namespace std;

int main()
{
int n;

cout<<"enter size of numbers :"<<endl;
cin>>n;

int num[n];

cout<<"enter elements :"<<endl;
for(int i=0;i<n;i++)
{
    cin>>num[i];
}

for(int i=0;i<n-1;i++)
{
    for(int j=0;j<n-i-1;j++)
    {
        if(num[j]>num[j+1])
        {
            int temp =num[j];
            num[j]=num[j+1];
            num[j+1]=temp;
        }
    }
}
cout<<"sorted elements :"<<endl;
for(int i=0;i<n;i++)
{
    cout<<num[i]<<endl;
}


return 0;
}


