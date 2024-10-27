#include<iostream>
using namespace std;

int main()
{
    int n;
    int max=0;
    cout<<"enter number of elements :"<<endl;
    cin>>n;

    int arr[n];
    cout<<"enter elements of list"<<endl;
    for(int i=0;i<n;i++)
    {
        cin>>arr[i];
    }
    for(int i=0;i<n;i++)
    {
        if(arr[i]>max)
        {
             max=arr[i];
             
        }
       
    }
     cout<<"largest = "<<max<<endl;
     int min= max;

         for(int i=0;i<n;i++)
    {
        if(arr[i]<min)
        {
             min=arr[i];
             
        }
       
    }
    cout<<"smallest = "<<min<<endl;
     
    
    return 0;
}