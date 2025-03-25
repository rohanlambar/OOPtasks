#include <iostream>
using namespace std;
class Car
{
private:
    string brand;
    string model;
    int year;

public:
    Car(string brand, string model, int year)
        : brand(brand), model(model), year(year) {}
    void display()
    {
        cout << "brand of car :" << brand << endl;
        cout << "model of car :" << model << endl;
        cout << "year of production :" << year << endl;
        cout << endl;
    }
};
int main()
{
    Car *obj = new Car("ford", "mustang", 2010); // heap allocation
    obj->display();
    // there is need to explicit delete heap allocated obj
    delete obj;
    Car obj1("bugati", "veron", 2016); // stack allocation
    obj1.display();

    return 0;
}