#include "iostream"

using namespace std;
class B;
class A {
friend class B;
int a;
public: A() : a(4) {}
void f(B &b,A &a);
int out(void) { return a; }
};
class B {
friend class A;
int b;
public: B() : b(2) {}
void f(A &a) { a.a /= b; }
};
void A::f(B &b,A &a){ b.f(*this); }
int main(void) {
A a;
B b;
a.f(b,a);
cout << a.out() << endl;
return 0;
} 