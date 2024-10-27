#include<iostream>
using namespace std;

class student{
private:

        string name;
        int roll;

public:
        string s;
        int r;

        void sets(){
            cout<<"enter name"<<endl;
            cin>>s;
            name=s;
        }
        string gets(){
            return name;
        }

         void setr(){
            cout<<"enter roll"<<endl;
            cin>>r;
            roll=r;
        }
        int getr(){
            return roll;
        }
};

int main(){

    student s1,s2;

    s1.sets();
    s1.setr();
    s2.sets();
    s2.setr();
    cout<<"name = "<<s1.gets()<<endl;
    cout<<"roll = "<<s1.getr()<<endl;
     cout<<"name = "<<s2.gets()<<endl;
    cout<<"roll = "<<s2.getr()<<endl;

    return 0;
}