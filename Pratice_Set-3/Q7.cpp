/*Implement a class Circle with a private data member radius. Provide
setters and getters, and an additional method getArea() that uses the
getter to calculate the area*/
#include<iostream>
#include<math.h>
using namespace std;
class circle{
    private:
        float radius;
    public:
        void set_value(float rad){
            radius=rad;
        }
        float Area(){
            return 3.14*(pow(radius,2));
        }
        float Circumference(){
            return 2*3.14*radius;
        }
        void get_value(){
            cout<<"Area Of the Circle: "<<Area()<<endl;
            cout<<"Circumference of the Cricle: "<<Circumference()<<endl;
        }
};
int main(){
    circle C1;
    float rad;
    cout<<"Enter a radius : ";
    cin>>rad;
    C1.set_value(rad);
    C1.get_value();
}