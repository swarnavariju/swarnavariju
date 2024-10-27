#include<iostream>
#define MAX 100

using namespace std;

class STACK
{
    private :
            int top;
            int item;
            int arr[];

    public :
            STACK() :top(-1){}

        void get_data()
            {
                cout<<" enter data to push : "<<endl;
                cin>> item;
            }
        void push()
            {
                if(top>=MAX-1)
                {
                    cout<<"stack overflow. can not push more item"<<endl;
                }
                else
                {
                    arr[++top]=item;
                    cout<<"item pushed : "<<item<<endl;
                }
                
            }
        void pop()
        {
            if (top<0)
            {
                cout<< "stack underflow !"<<endl;
            }
            else
            {
                
                cout<<"popped item : "<<arr[top--]<<endl;

            }
        }

    void display()
    {
        if (top < 0) {
            cout << "Stack is empty.\n";
        } else {
            cout << "Stack elements: ";
            for (int i = top; i >= 0; i--) {
                cout << arr[i] << " ";
            }
            cout << endl;
        }
    }
};

int main()
{
     STACK stack;
    int choice;

    while (true) {
        cout << "\n1. Get Data\n2. Push\n3. Pop\n4. Display\n5. Exit\n";
        cout << "Enter your choice: ";
        cin >> choice;

        switch (choice) {
            case 1:
                stack.get_data();
                break;
            case 2:
                stack.push();
                break;
            case 3:
                stack.pop();
                break;
            case 4:
                stack.display();
                break;
            case 5:
                cout << "Exiting program.\n";
                return 0;
            default:
                cout << "Invalid choice! Please try again.\n";
        }
    }
}
