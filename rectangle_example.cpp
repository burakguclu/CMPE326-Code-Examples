#include <iostream>

using namespace std;

class Rectangle
{
private:
    int height;
    int width;

public:
    Rectangle(int h, int w)
    {
        height = h;
        width = w;
    }
    int getHeight() { return height; }
    int getWidth() { return width; }
    Rectangle operator+(const Rectangle &other)
    {
        Rectangle r(0, 0);
        r.height = this->height + other.height;
        r.width = this->width + other.width;
        return r;
    }
};

int main()
{
    Rectangle r1(4, 5);
    Rectangle r2(7, 10);
    Rectangle r3 = r1 + r2;

    cout << "Height of r3=" << r3.getHeight() << endl;
    cout << "Width of r3=" << r3.getWidth() << endl;
}