
// designing a class BankAccount with default , parametrised and copy contructor
#include <iostream>
using namespace std;
class BankAccount
{
private:
    int accountNo;
    int balance;

public:
    // default contructor
    BankAccount()
        : accountNo(0000), balance(00000)
    {
        cout << "default contructor called" << endl;
    }
    // parameterised contructor
    BankAccount(int accNo, int balance)
        : accountNo(accNo), balance(balance) {}
    // copy Contructor
    BankAccount(BankAccount &obj)
    {
        this->accountNo = obj.accountNo;
        this->balance = obj.balance;
    }
    // method
    void display()
    {
        cout << "account detail" << endl;
        cout << "account no : " << this->accountNo << endl;
        cout << "balance : Rs." << this->balance << endl;
        cout << endl;
    }
    // destructor
    ~BankAccount()
    {
        cout << "destructor called on account no " << this->accountNo << endl;
    }
};
int main()
{
    // calling default contructor
    BankAccount obj;
    obj.display();
    // calling parameterised contructor
    BankAccount obj1(121212, 10000);
    obj1.display();
    // calling copy contructor
    BankAccount obj2(obj1);
    obj2.display();
    return 0;
}