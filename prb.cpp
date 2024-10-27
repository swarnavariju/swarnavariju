#include<iostream>
using namespace std;

class number{
private:
     
     int value;

public:
     int n;
    void setvalue(){
        cout<<"enter n";
        cin>>n;
        value=n;
    }
    int getvalue(){
        return value;
    }

};


int main()
{
    number s1,s2;
    
    s1.setvalue();
    s1.getvalue();
    s2.setvalue();
    s2.getvalue();
    cout<<"s1+s2 = "<<s1.getvalue()+s2.getvalue()<<endl;


    return 0;
}