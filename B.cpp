#include <iostream>
using namespace std;

class B {
private:
    int B1;
    float B2;

public:
    int getB1() const { return B1; }
    float getB2() const { return B2; }

    void setB1(int value) { B1 = value; }
    void setB2(float value) { B2 = value; }

    void MB1() {
        cout << "Imprimindo o método MB1()" << endl;
    }

    void MB2() {
        cout << "Imprimindo o método MB2()" << endl;
    }

    void MB3() {
        cout << "MB3" << endl;
    }

};
