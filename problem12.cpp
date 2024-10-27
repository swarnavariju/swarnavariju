#include<iostream>
using namespace std;

class Float{
    private:
            float value;

    public:
            Float(float v =0.0):value(v){}

            void get_value(){
                 
                cout<< "enter float value: "<<endl;
                cin>>value;
                
            }
            

            Float operator+(const Float & other)
            const{
                return(this->value + other.value);
                 }
            
            Float operator-(const Float & other)
            const{
                return(this->value - other.value);
                 }
            
             Float operator*(const Float & other)
            const{
                return(this->value * other.value);
                 }

            Float operator/(const Float & other)
            const{
                if(other.value==0)
                {
                    cout<<"error : division by zero"<<endl;
                    return Float(0);
                    
                }
                else{
                return(this->value / other.value);
                    }
                 }

            void display()
            const{
                cout<<value <<endl;
            }
};

    int main()
    {
        Float v1 ,v2;

        v1.get_value();
        v2.get_value();

        Float sum = v1 + v2;
        Float diff = v1 - v2;
        Float prod = v1 * v2;
        Float quot = v1 / v2;

        cout<<" sum : "<<endl;
        sum.display();

        cout<<"dif : "<<endl;
        diff.display();

        cout<<" prod : "<<endl;
        prod.display();

        cout<<"quot : "<<endl;
        quot.display();

        return 0;
    }