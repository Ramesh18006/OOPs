#include<iostream>
using namespace std;
class books{
    private:
        string title;
        float price;
    public:
        void set_value(string tlt,float pr){
            title=tlt;
            price=pr;
        }
        void get_data(){
            cout<<"Title: "<<title<<"||"<<"Price: "<<price<<endl;
        }
};
int main(){
    books a1;
    a1.set_value("Tirukkural",599);
    cout<<"BookS"<<endl;
    a1.get_data();
}