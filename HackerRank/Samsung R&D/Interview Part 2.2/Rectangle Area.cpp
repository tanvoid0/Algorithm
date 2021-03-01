// Rectangle Area

#include <iostream>
#include <cstdio>
using namespace std;

class Rectangle{
protected:
    int height{};
    int width{};
public:
    virtual void display(){
        printf("%d %d\n", width, height);
    }
};
class RectangleArea: public Rectangle {
    int area{};
public:
    void read_input(){
        scanf("%d %d", &width, &height);
    }

    void display(){
        printf("%d\n", width*height);

    }
};

int main()
{
    /*
     * Declare a RectangleArea object
     */
    RectangleArea r_area;
    /*
     * Read the width and height
     */
    r_area.read_input();

    /*
     * Print the width and height
     */
    r_area.Rectangle::display();
    /*
     * Print the area
     */
    r_area.display();

    return 0;
}