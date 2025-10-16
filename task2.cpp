#include <iostream>
using namespace std;

class Count {
private:
    static int count;

public:
    Count() {
        count++;  
        cout << "Object created Count = " << count << endl;
    }

    static int getCount() {
        return count;
    }
};

int Count::count = 0;
int main() {
    Count c1;
    Count c2;
    Count c3;

    cout << "Total objects created: " << Count::getCount() << endl;

    return 0;
}
