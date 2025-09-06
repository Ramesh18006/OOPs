/*Write a class Temperature with a private member celsius. Provide
setCelsius() and getFahrenheit() methods to convert the stored
temperature to Fahrenheit*/
#include<iostream>
using namespace std;
class temperature{
    private:
        float cele;
    public:
        void set_value(float C){
            cele=C;
        }
        float Farenheite(){
            return (cele * (9.0/5.0)) + 32;
        }
        void display(){
            cout<<"Farenheite: "<<Farenheite()<<endl;
        }
};
int main(){
    temperature T1;
    float C;
    cout<<"Enter a celsius: ";
    cin>>C;
    T1.set_value(C);
    T1.display();
}