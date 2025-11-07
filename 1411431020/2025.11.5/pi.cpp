double approximate_pi(int n) {
    int i;
    double pi_approx = 0.0;
    double sign = 1.0;

    for (i = 0; i < n; i++) {
        double denominator = 2.0 * i + 1.0;
        pi_approx += sign * (4.0 / denominator);
        sign *= -1.0;
    }

    return pi_approx;
}