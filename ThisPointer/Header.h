#include <iostream>
using namespace std;

class Shape
{
public:
    // Constructor definition
    Shape(int l = 2, int w = 2)
    {
	   length = l;
	   width = w;
    }
    
    double Area()
    {
	   return length * width;
    }

    // Use 'this' to compare areas
    int compareWithThis(Shape shape)
    {
	   return this->Area() > shape.Area();
    }

    //'this' is not necessary to compare shapes
    int compare(Shape shapeIn)
    {
	   return Area() > shapeIn.Area();
    }

private:
    int length; //Declare shape1
    int width;
};