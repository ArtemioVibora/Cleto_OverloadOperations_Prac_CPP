#include <iostream>

using namespace std;

class Counter {
private:
    int count;
public:

    Counter() : count(0) {}
    Counter(int c) : count(c) {}

    int getCount() {
        return count;
    }

    Counter operator ++ () {
        Counter temp;

        ++count;

        temp.count = count;

        return temp;
    }

    Counter operator ++ (int)
    {
        int temp = count++;
        return Counter(temp);
    }

    Counter operator -- (int) {
        --count;

        Counter temp;
        temp.count = count;
        return temp;
    }

    Counter operator + (Counter const& o) {
        Counter temp;
        temp.count = count + o.count;
        return temp;
    }

    Counter operator - (Counter const& o) {
        Counter temp;
        temp.count = count - o.count;
        return temp;
    }

    Counter operator * (Counter const& o) {
        Counter temp;
        temp.count = count * o.count;
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
    c2 = c1++;
    cout << "c1 = " << c1.getCount() << endl;
    cout << "c2 = " << c2.getCount() << endl;

    Counter c4;
    c4 = c1 - c2;
    cout << "c4 = " << c4.getCount();
}