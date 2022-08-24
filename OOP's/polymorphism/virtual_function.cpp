#include <bits/stdc++.h>
using namespace std;

class shape
{
public:
    int width, length;
    shape(int a, int b)
    {
        width = a;
        length = b;
    }
    void Area()
    {
        cout << "Shape not found" << endl;
    }
};

class rectangle : public shape
{
public:
    rectangle(int a, int b) : shape(a, b) {}

    void Area()
    {
        cout << "Area of rectangle:" << length * width << endl;
    }
};
class triangle : public shape
{
public:
    triangle(int a, int b) : shape(a, b) {}

    void Area()
    {
        cout << "Area of triangle=" << length * width / 2 << endl;
    }
};
int main(){
    triangle t(10,20);
    triangle r(20,30);
    shape* shapetr;
    shapeptr=&r;
    shapetr->Area();
    return 0;
}
