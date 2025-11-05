double Pi(int n) {
	int i;
	double pi = 0.0;
	double sign = 1.0; 

	for (i = 0; i < n; i++) {
		double m = 2.0 * i + 1.0; 
		pi = pi + sign * (4.0 / m);
		sign = sign * (-1.0);
	}
	return pi;
}