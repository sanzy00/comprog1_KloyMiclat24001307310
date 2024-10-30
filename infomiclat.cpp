#include <iostream>
#include <string>

using namespace std;

int main()
{
    string name; 
    string address;
    int age;
    string birthday;
    
    cout<<"Enter Your name: ";
    cin>> name;
    
    cout<<"Enter Your age: ";
    cin>> age;
    
    cout<<"Enter Your birthday: ";
    cin>> birthday;
    
    cout<<"Enter Your address: ";
    cin>> address;
    
    cout <<"My name is , " << name;
    cout <<"My age is , " << age;
    cout <<"My birthday is on " << birthday;
    cout <<"I'm from " << address;

    return 0;
}