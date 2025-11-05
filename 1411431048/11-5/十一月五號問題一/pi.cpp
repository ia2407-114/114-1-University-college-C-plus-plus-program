double compute_pi(int n) {
    double pi = 0.0;
    int sign = 1;
    for (int i = 0; i < n; i++) {
        pi += sign * (1.0 / (2 * i + 1));
        sign = -sign;  // ¥¿­t¸¹¥æ´À
    }
    pi *= 4.0;
    return pi;
}