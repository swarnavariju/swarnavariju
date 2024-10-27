#include<iostream>
#include<fstream>
using namespace std;

class temp{

    string username,email,password;
    fstream file;

    public :
    void login();
    void signup();
    void forgotpassword();
    
}obj;



int main()
{
    char choice;

    cout<<"\n1-login";
    cout<<"\n2-sine up";
    cout<<"\n3- forgot password";
    cout<<"\n4-exit";

    cout<<"\n enter your choice";

    cin>>choice;

    switch (choice)
    {
    case 1:
        break;

     case 2:
        break;
     
     case 3:
        break;

     case 4:
        break;
    
    
    default:
    cout<<"invalid input";
        break;
    }
}

void temp :: signup(){
    cout<<"\n ENTER YOUR USERNAMENAME : ";
    getline(cin,username);

    cout<<"\n ENTER YOUR EMAIL ADDRESS : ";
    getline(cin,email);

     cout<<"\n ENTER YOUR PASSWORD : ";
    getline(cin,password);

    file.open("loginData.txt",ios :: out | ios :: app);
    file<<username<<"*"<<email<<"*"<<password<<endl;
    file.close();
     
}

void temp :: login(){
    string searchname,searchpass;
    cout<<".........LOGIN.........."<<endl;
    cout<<"enter your user name : "<<endl;
    getline(cin,searchname);

    cout<<"enter your password : "<<endl;
    getline(cin,searchpass);

file.open("loginData.txt",ios :: in);
getline(file,username,'*');
getline(file,email,'*');
getline(file,password,'\n');

while(!file.eof()){
    if(username==searchname)
    {
        if(password==searchpass)
        {
            cout<<"\n login successful...";
            cout<<"\n username :: "<<username<<endl;
            cout<<"\n email :: "<<email<<endl;
           
        }
        else{
            cout<<"username or password is incorrect\n";
        }
    }
      else{
        cout<<"\n login unsuccesful.....";
    } 
    getline(file,username,'*');
    getline(file,email,'*');
    getline(file,password,'\n'); 
  
}
file.close();

}

void temp :: forgotpassword()
{
    cout<<"\n enter your username :: ";
    getline(cin,username);
    cout<<"\n enter your email address : ";
     getline(cin,email);

    file.open("loginData.txt",ios :: in);

    getline(file,username,'*');
    getline(file,email,'*');
    getline(file,password,'\n');
    while(file.eof())
    {
    
    }
}

