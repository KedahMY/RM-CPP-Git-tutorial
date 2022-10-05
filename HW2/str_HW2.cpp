//HW 2: Pointing fingers

#include <iostream>
using namespace std;

/*Compilers use pointer arithmetic internally to access array elements.
Because of the conversion rules that apply to the binary and operator, 
if A is an array object and b is an integer, A[B] designates the B-th 
element of A (counting from zero).

Therefore, A[B] is defined as A[B] == *(A+B)
B[A] == *(B+A)
So by addition commutative property, A[B] == B[A]
*/

char str[] = "Hello World!";
char letter1 = str[10];
char letter2 = 10[str];
char* ptr1 = &letter1; 
char* ptr2 = &letter2; 
int main() {
    cout << str[10] << " " << 10[str] << "\n";
    cout << ptr1 << " " << ptr2 << "\n";
    return 0;
}
