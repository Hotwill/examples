/*! 
 *  \brief     Pretty nice class.
 *  \details   Tracking vtable.
 *  \author    piter cf16 eu
 *  \date      2014 03 18
 */

class A {
public:
    virtual int f() { return 15;}
};

class B : public A {
public:
    int f() { return 17;}
};

int main() {
    B b;
    return 0;
}