#include <iostream>

using namespace std;

class point
{
private:

    float x;
    float y;

public:

    point (){}

    point (float x, float y)
    {
        this->x = x;
        this->y = y;
    }

    void print ();
    void setter(int, int);

};

void point :: print ()
{
    cout << "(" << x << "," << y << ")";
}

void point :: setter (int x, int y)
{
    this->x = x;
    this->y = y;
}


int main()
{
    point p1;
    
    int coordinateX, coordinateY;

    cout << "Enter the coordinates of the point (first x and then y): \n";
    cin >> coordinateX >> coordinateY;
    
    p1.setter(coordinateX, coordinateY);

    cout << "Co-ordinates of the point: ";
    p1.print();
}