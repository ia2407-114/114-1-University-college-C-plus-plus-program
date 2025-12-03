


double power(double x, int n) {
    if (n == 0) return 1;       
    return x * power(x, n - 1);  
}

double factorial(int n) {
    if (n == 0) return 1;       
    return n * factorial(n - 1);
}
