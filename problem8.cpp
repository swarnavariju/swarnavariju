#include<iostream>
#include<algorithm>
using namespace std;

class student{
public:
    string sname;
    int total;
    int Tmax;
    int n;
    int average;
    
     void assign()
    {
        sname="swarnava ghosh";
       
        Tmax=50;
        
        
     }
     void compute()
    {
        int marks[5];
         cout<<"enter marks: "<<endl;
        for(int i=0;i<5;i++)
        {
        
            cin>>marks[i];
        }
         for(int i=0;i<5;++i)
        {
            cout<<marks[i];
        }
       
        
        average=(total/5);
    }

        void display()
        {
            cout<<"name ="<<sname<<endl;
            cout<<"total maximum marks : "<<Tmax<<endl;
            cout<<"total = "<<total<<endl;
            cout<<"average = "<<average<<endl;
        }
};

int main()
{
    student s1;
    s1.assign();
    s1.compute();
    s1.display();

    return 0;
}