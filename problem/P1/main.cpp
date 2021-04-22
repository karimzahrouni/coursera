#include "iostream";

using namespace std;
struct A {
int a;
float b;
};
struct B {
int b;
float a;
};
struct C {
A a; B b;
};
int main(void) {
    int t[4] = { 8, 4, 2, 1 };
    int *p1 = t + 2, *p2 = p1 - 1;
    p1++;
    cout<<*p1 - t[p1 - p2] <<endl;
C c1 = {1, 2, 3, 4}, c2 = {5, 6, 7, 8};
cout<< c1.b.a + c2.a.b << endl;
return 0;
} 