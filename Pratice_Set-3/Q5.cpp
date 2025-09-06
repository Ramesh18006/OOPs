/*Define a class Employee with private members id and salary. Use
setters and getters to initialize and display their values. In main(),
create multiple employees and print their details*/
#include<iostream>
using namespace std;
class Employee{
    private:
        string ID;
        float salary;
    public:
        void set_value(string id,float sal){
            ID=id;
            salary=sal;
        }
        void get_value(){
            cout<<"Employee ID: "<<ID<<"  |  "<<"Salary: "<<salary<<endl;
        }
};
int main(){
    Employee E1;
    Employee E2;
    Employee E3;
    E1.set_value("01Aug006",75000);
    E2.set_value("23Sep008",100000);
    E3.set_value("04Aprl007",80000);
    E1.get_value();
    E2.get_value();
    E3.get_value();
}