/*Write a class Car with private members brand and model. Provide
setter and getter methods. In main(), create an array of cars and use
the methods to assign and print their values.
*/
#include<iostream>
using namespace std;
class Car{
    private:
     string model;
     string brand;
    public:
        void set_value(string mod,string br){
            model=mod;
            brand=br;
        }
        void get_value(){
            cout<<"Brand: "<<brand<<"  |  "<<"Model: "<<model<<endl;
        }
};
int main(){
    Car car[4];
    car[0].set_value("Skoda","superb");
    car[1].set_value("volkswagen", "virtus");
    car[2].set_value("Mahindra","Scropio");
    car[3].set_value("Audi","R8");
    cout<<"_________Cars Collection__________"<<endl;
    for (int i = 0; i < 4; i++)
    {
        car[i].get_value();
    }
    return 0;


}