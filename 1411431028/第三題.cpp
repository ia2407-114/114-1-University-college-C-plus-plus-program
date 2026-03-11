#include <iostream>
#include <cstdio>

using namespace std;


double power(int& x, int& y);
double fact(int& i);

int main() {
    int x, i; 

    cout << "Enter x = ";
    if (!(cin >> x)) return 1;

    cout << "Enter i = ";
    if (!(cin >> i)) return 1;

   
    double p_res = power(x, i);
    double f_res = fact(i);

    printf("result: power = %.2f, factorial = %.2f\n", p_res, f_res);

    return 0;
}


double fact(int& i) {
    double level = 1.0;
    
    for (int j = i; j >= 1; j--) {
        level *= j;
    }
    return level; 
}


double power(int& x, int& y) {
    double xpow = 1.0;
    for (int k = 1; k <= y; k++) {
        xpow *= x;
    }
    return xpow; 
}