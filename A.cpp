#include <iostream>
using namespace std;

class A {
private:
    int A1;
    float A2;

public:
    int getA1() const { return A1; }
    float getA2() const { return A2; }

    void setA1(int value) { A1 = value; }
    void setA2(float value) { A2 = value; }

    void MA1() {
        cout << "Imprimindo o método MA1()" << endl;
    }

    void MA2() {
        cout << "Imprimindo o método MA2()" << endl;
    }
};
