#include <iostream>

using namespace std;

class Counter {
private:
    int count;
public:

    Counter() : count(0) {}

    int getCount() {
        return count;
    }

    Counter operator ++ () {
        Counter temp;

        ++count;

        temp.count = count;

        return temp;
    }

};

int main() {
    Counter c1, c2;

    cout << "c1 = " << c1.getCount() << endl;
    cout << "c2 = " << c2.getCount() << endl;

    ++c1;
    c2 = ++c1;

    cout << "c1 = " << c1.getCount() << endl;
    cout << "c2 = " << c2.getCount() << endl;
}