#include<iostream>
using namespace std;

class B;
class A{
     private:
            int valueA;

    public :
            void get_value()
            {
                int a;
                cout<<"enter a: "<<endl;
                cin>>a;

                valueA=a;

            }
        friend int add(A,B);
};

class B{
     private:
            int valueB;

    public :
            void get_value()
            {
                int b;
                cout<<"enter b: "<<endl;
                cin>>b;

                valueB=b;

            }
            friend int add(A,B);
};

int add(A n1, B n2)
{
    return (n1.valueA + n2.valueB);
}

int main()
{
    A s1;
    s1.get_value();
    B s2;
    s2.get_value();

    cout<<"sum of adding two members of using friend function : "<<endl;
    cout<<"result : "<<add(s1,s2);

    return 0;
}