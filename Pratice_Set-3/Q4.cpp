//Area of rectangle By using class
#include<iostream>
using namespace std;
class Rectangle{
    private:
        float length;
        float width;
    public:
        void set_value(float len,float wid){
            length=len;
            width=wid;
        }
        float area(){
            return length*width;
        }
};
int main(){
    Rectangle R1;
    float len,wid;
    cout<<"Enter a Length of the Rectangle: ";
    cin>>len;
    cout<<"\n"<<"ENter a Width of the Rectangle: ";
    cin>>wid;
    R1.set_value(len,wid);
    cout<<"The Area of rectangle: "<<R1.area();
}