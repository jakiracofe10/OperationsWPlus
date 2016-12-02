#include <iostream>

using namespace std;

int multiply(int a, int b) {
    int result = 0;
    if (b<0 && a<0 || a>0 && b>0) {
        for (int i = 0; i < b; i++) {
            result += a;
        }
    } else {
        for (int i = 0; i < b; i++) {
            result -= a;
        }
    }
    return result;
}

int subtract(int a, int b) {
    int negateB  = multiply(b, -1);
    return a + negateB;
}


int divide(int a, int b) {
    int count = 0;
    int rem;
    while (rem >= a) {
        rem = a-b;
        count++;
    }
}

int main() {
    int a = 5;
    int b = 11;
    int result1 = multiply(a,b);
    int result2 = subtract(a,b);
    int result3 = divide(a,b);
    cout << result1 << " " << result2 << " " << result3;
    return 0;
}