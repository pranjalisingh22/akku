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
    int getX();
    int getY();

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

int point :: getX()
{
    return x;
}

int point :: getY()
{
    return y;
}

class rectangle
{
private:

    point tr,tl,br,bl;

public:

    rectangle()
    {
        tr.setter(1,1);
        bl.setter(0,0);
        br.setter(1,0);
        tl.setter(0,1);
    }

    rectangle(point bottomLeft, point topRight)
    {
        tr = topRight;
        bl = bottomLeft;
        tl.setter(bottomLeft.getX(), topRight.getY());
        br.setter(topRight.getX(), bottomLeft.getY());
    }

    void print()
    {
        cout << "the four co-ordinates of the corners are:\n";
        cout << "Top right: ";
        tr.print();
        cout << "\nTop left: ";
        tl.print();
        cout << "\nBottom left: ";
        bl.print();
        cout << "\nBottom right ";
        br.print();
    }
};


int main()
{
    int coordinateX, coordinateY;

    cout << "Enter the coordinate of the top right corner:\n";
    cin >> coordinateX >> coordinateY;
    point topRight(coordinateX, coordinateY);

    cout << "Enter the coordinate of the bottom left corner:\n";
    cin >> coordinateX >> coordinateY;
    point bottomLeft(coordinateX, coordinateY);

    rectangle rect1 (bottomLeft, topRight);

    cout << "\n\nOf this rectangle, ";
    rect1.print();

    rectangle rect2;

    cout << "\n\nOf the default rectangle, ";
    rect2.print();


}