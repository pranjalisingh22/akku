#include <iostream>

using namespace std;

class rectangle      //Create a class for rectangle that stores data of length and breadth and has two functions : area() and perimeter().
{
private:

    float length;
    float breadth;

public:

    int area(void)
    {
        return length*breadth;
    }

    int perimeter(void)
    {
        return 2*(length+breadth);
    }

    rectangle (int len, int width)
    {
        length = len;
        breadth = width;
    }
};

int main()
{
     /*Write a program that uses this class to create two rectangles (rectangle objects) of user inputted length and breadth.
     Compare the areas and perimeter of the those rectangles.*/

     int inLen, inBreadth;

     cout << "Enter the length and breadth of the first rectangle: ";
     cin >> inLen >> inBreadth;

     rectangle rect1(inLen, inBreadth);

     cout << "Enter the length and breadth of the second rectangle: ";
     cin >> inLen >> inBreadth;

     rectangle rect2(inLen, inBreadth);

     if (rect1.area() > rect2.area())
        cout << "The first recta has a higher area\n";
     else if(rect1.area() == rect2.area())
        cout << "Both the rectangles have the same area\n";
     else
        cout << "The first rectangle has a smaller area\n";

     if (rect1.perimeter() > rect2.perimeter())
        cout << "The first rectangle has a higher perimeter";
     else if(rect1.perimeter() == rect2.perimeter())
        cout << "Both the rectangles have the same perimeter";
     else
        cout << "The first rectangle has a smaller perimeter";

