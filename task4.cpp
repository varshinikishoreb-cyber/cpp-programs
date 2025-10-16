#include <iostream>
using namespace std;

class Box {
private:
    int l, b, h;

public:
    Box(int length, int breadth, int height) {
        l = length;
        b = breadth;
        h = height;
}
    friend int calculateVolume(Box box);
};

int calculateVolume(Box box) {
    return box.l * box.b * box.h;
}

int main() {
    Box myBox(3, 4, 5); 

    int volume = calculateVolume(myBox);
    cout << "Volume of the box is " << volume << endl;

    return 0;
}
