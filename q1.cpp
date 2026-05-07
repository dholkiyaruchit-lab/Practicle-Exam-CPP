#include <iostream>
using namespace std;

class Laptop
{
private:
    string name;
    int price;
    string processor;

public:
    Laptop(string n, int p, string pro)
    {
        name = n;
        price = p;
        processor = pro;
    }
    void displayInfo()
    {
        cout << "Laptop name     :" << name << endl;
        cout << "Laptop Price    :" << price << endl;
        cout << "Laptop Processor:" << processor << endl;
    }
};

int main()
{
    Laptop l1("ASUS TUF", 70000, "i7");
    l1.displayInfo();

    Laptop l2("Lenovo Legion", 70000, "i5");
    l1.displayInfo();

    return 0;
}