#include <iostream>
using namespace std;

class Shape
{
private:
    string color;
    float area;

public:
    void setColor(string c)
    {
        color = c;
    }

    string getColor()
    {
        return color;
    }

    void setArea(float a)
    {
        area = a;
    }

    float getArea()
    {
        return area;
    }
};

class Circle : public Shape
{
private:
    float radius;

public:
    Circle(float r, string c)
    {
        radius = r;
        setColor(c);
    }

    void calculateArea()
    {
        float a = 3.14159 * radius * radius;
        setArea(a);
         cout << "Circle Color " << getColor() << endl;
        cout << "Circle Area   " << getArea() << endl;
    }
};

class Rectangle : public Shape
{
private:
    float length, width;

public:
    Rectangle(float l, float w, string c)
    {
        length = l;
        width = w;
        setColor(c);
    }

    void calculateArea()
    {
        float a = length * width;
        setArea(a);
        cout << "Rectangle Color " << getColor() << endl;
        cout << "Rectangle Area  " << getArea() << endl;
    }
};

int main()
{

    Circle c1(15, "Brown");
    Rectangle r1(10, 20, "BLUE");

    c1.calculateArea();
    cout << endl;
    r1.calculateArea();
    return 0;
}