//HW 3: Ackermann Function 

#include <iostream>
#include <stdio.h> 
using namespace std; 
  
int ack(int m, int n) { 
    if (m == 0) { 
        return n + 1; 
    } 
    else if(n == 0) { 
        return ack(m - 1, 1); 
    } 
    else { 
        return ack(m - 1, ack(m, n - 1)); 
    } 
} 
  
int ack(int m) {
    return ack(m-1, 1);
}

int main() { 
    int A, B; 
    A = ack(2, 1);
    B = ack(4); 
    cout << A << "\n" << B; 
    return 0; 
}