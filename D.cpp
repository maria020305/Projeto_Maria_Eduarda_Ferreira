#include <iostream>
using namespace std;

class D {
private:
    int D1;
    float D2;

public:
    D(int d1, float d2) : D1(d1), D2(d2) {}

    void MD1() {
        cout << "MD1" << endl;
    }

    void MD2() {
        cout << "MD2" << endl;
    }

    void MD3() {
        cout << "MD3" << endl;
    }
}