//bank process by using class
#include<iostream>
using namespace std;
class bank
{
private:
    float balance;
public:
    bank(){
        balance=0;
    }
    void get_data(float b){
        if(b>=0){
            balance=b;
        }
        else{
            cout<<"____________Bank balance cannot be negative____________";
            balance=0;
        }
    }
    float print(){
        return balance;
    }
    void deposite(float D){
        if (D>0)
        {
            balance+=D;
        }
        else{
            cout<<"Deposite Amount cannot be negative"<<endl;
        }
    }
    void withdrawal(float W){
        if(W<=0){
            cout<<"Withdrawal amount must be positive"<<endl;
        }
        else if (W>balance)
        {
            cout<<"Error: Insufficent Balance"<<endl;
        }
        else
        {
            balance-=W;
        }
    }
};
int main(){
    bank s1;
    float amount;
    cout<<"Enter the balance: "<<endl;
    cin>>amount;
    s1.get_data(amount);
    int dep;
    cout<<"Enter your Deposite amount: "<<endl;
    cin>>dep;
    s1.deposite(dep);
    int with;
    cout<<"Enter your withdrawal amount: "<<endl;
    cin>>with;
    s1.withdrawal(with);
    cout<<"Final Balance is: "<<s1.print();
}