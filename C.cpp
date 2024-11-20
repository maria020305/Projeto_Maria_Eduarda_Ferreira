#include <iostream>
using namespace std;

class C {
public:
    string C1;
    int C2;

    void setC1(string value) { C1 = value; }
    string getC1() { return C1; }

    void setC2(int value) { C2 = value; }
    int getC2() { return C2; }

    void MC1() { 
        cout << "MC1" << endl; 
    }
    
    void MC2() { 
        cout << "MC2" << endl; 
    }

    void MC3() { 
        cout << "MC3" << endl; 
    }
};
