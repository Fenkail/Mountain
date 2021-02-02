#include <iostream>

using std::cout;
using std::endl;

class Account
{
    double banlance;

public:
    Account()
    {
        banlance = 0.0;
    }
    Account(double balance)
    {
        this->banlance = balance;
    }
    void deposit(double amount)
    {
        banlance += amount;
    }
    double withdraw(double amount)
    {
        auto flag{0.0};
        if (banlance < amount)
        {
            flag = banlance;
            banlance = 0;
            return flag;
        }
        else
        {
            banlance -= amount;
            return amount;
        }
    }
};


int main()
{
    Account a1;
    Account a2 = Account(1000);
    a1.deposit(8.0);
    cout << a1.withdraw(10) << endl;
    cout << a2.withdraw(200) << endl;

    cout << Account(1000).withdraw(2000) << endl;


    return 0;
}