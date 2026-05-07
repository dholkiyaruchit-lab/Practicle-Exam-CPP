#include <iostream>
using namespace std;

class Shape
{
protected:
    string color;

public:
    Shape(string c)
    {
        color = c;
    }

    virtual void display_Details()
    {
        cout << "Shape Color :" << color << endl;
    }


    virtual ~Shape()
    {
    }
};

class Circle : public Shape
{
private:
    float radius;

public:
    Circle(float r, string c) : Shape(c)
    {
        radius = r;
    }

    void display_Details() override
    {
        float area = 3.14 * radius * radius;

        cout << "Color : " << color << endl;
        cout << "Radius : " << radius << endl;
        cout << "Area : " << area << endl;
    }
};

class Rectangle : public Shape
{
private:
    float length, width;

public:
    Rectangle(float l, float w, string c) : Shape(c)
    {
        length = l;
        width = w;
    }

    void display_Details() override
    {
        float area = length * width;

        cout << "Color : " << color << endl;
        cout << "Length : " << length << endl;
        cout << "Width : " << width << endl;
        cout << "Area : " << area << endl;
    }
};

int main()
{
  
    Shape *shapes[2];


    shapes[0] = new Circle(5, "Red");
    shapes[1] = new Rectangle(4, 6, "Blue");

    for (int i = 0; i < 2; i++)
    {
        shapes[i]->display_Details();
        cout << endl;
    }


    for (int i = 0; i < 2; i++)
    {
        delete shapes[i];
    }

    return 0;
}