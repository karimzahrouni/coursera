#include "iostream"
#include "stdio.h"
using namespace std;
int i = 1;
void f(void) {
throw 1;
i++;
}
void g(void) {
i++;
try { f(); }
catch(int &i) {
throw ++i;
}
}
int main(void) {
try { g(); i++; }
catch(...) { i++; }
cout << i << endl;
return 0;
} 