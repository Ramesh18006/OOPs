#include<iostream>
using namespace std;
class bio
{
private:
    char name[50];
    int age;
    char city[100];    
public:
    void get_data(){
        cout<<"Enter your Name & Age: ";
        cin>>name>>age;
        cout<<"Enter your City: ";
        cin>>city;
    }
    void print(){
        cout<<"Hello "<<name<<" you're now "<<age<<" you from "<<city;
    }

};
int main(){
    bio o;
    o.get_data();
    o.print();
    return 0;
}