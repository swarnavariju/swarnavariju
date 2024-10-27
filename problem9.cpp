#include<iostream>
using namespace std;
class complex{
private:
    double real;
    double img;

    public:
     complex(double r =0, double i =0):real(r),img(i){}

    void get_r1()
    {
        double r;
        cout<<"enter real part : "<<endl;
        cin>>r;
        real=r;
    }

     void get_i1()
    {
        double i;
        cout<<"enter imaginary part : "<<endl;
        cin>>i;
        img=i;

    }
    // void get_r2()
    // {
    //     double s;
    //     cout<<"enter real part 2: "<<endl;
    //     cin>>s;
    //     real=s;
    // }

    //  void get_i2()
    // {
    //     double j;
    //     cout<<"enter imaginary part 2: "<<endl;
    //     cin>>j;
    //     img=j;

    // }

    complex operator+(complex &c2)
    {
        complex temp;
        temp.real= real+ c2.real;
        temp.img= img + c2.img;

    }

    complex operator-(complex &c2)
    {
        complex temp;
        temp.real= real- c2.real;
        temp.img= img - c2.img;

    }

    void display()
    {
            if (img >=0)
            {
                cout<<real<<"+"<<img<<"i"<<endl;

            }
            else
            {
                cout<<real<<"-"<<-img<<"i"<<endl;
            }
    }

};

int main()
{
    complex c1,c2,c3;

    c1.get_r1();
    c1.get_i1();
    c2.get_r1();
    c2.get_i1();

    c3 = c1+ c2;
    cout<<"c1 +c2 = ";
    c3.display();

    c3 = c1- c2;
    cout<<"c1 -c2 = ";
    c3.display();

    return 0;
}