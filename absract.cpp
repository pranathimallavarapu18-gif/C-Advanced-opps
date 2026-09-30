#include <iostream>
using namespace std;

class bank
{
public:
    virtual void moneydetection() = 0;
};

class upi : public bank
{   public:
    void moneydetection()
    {
        cout << "money from upi" << endl;
    }
};

class debitcard : public bank
{
	
    public:
    void moneydetection()
    {
        cout << "money from debitcard" << endl;
    }
};
class scanner : public bank
{   public:
    void moneydetection()
    {
        cout << "money from scanner" << endl;
    }
};
class creditcard : public bank
{   public:
    void moneydetection()
    {
        cout << "money from creditcard" << endl;
    }
};
class phonenumber : public bank
{   public:
    void moneydetection()
    {
        cout << "money from phonenumber" << endl;
    }
};

int main()
{    upi u;
    debitcard d;
    scanner s;
    creditcard c;
    phonenumber p;
 

    u.moneydetection();
    d.moneydetection();
    s.moneydetection();
	c.moneydetection();
    p.moneydetection();

    return 0;
}
