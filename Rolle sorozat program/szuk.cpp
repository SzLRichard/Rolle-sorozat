double fug (double k,int f[]) {
	double q;
	q = f[3] * k * k * k + f[2] * k * k + f[1] * k + f[0];
	return q;

}


void szukites(double& a, double& b, int  f[]) {
	double szuk = 1;
	while (szuk > 0.000001) {
		while (true) {
			if (fug(b - szuk,f)> 0 && fug(b,f) < 0) { a = b - szuk;break; }
			if (fug(b - szuk,f) < 0 && fug(b,f) > 0) { a = b - szuk;break; }
			
			if (fug(b-szuk,f) == 0) {
				b = szuk;a = -1*szuk;break;
			}
			b -= szuk;
		}
		szuk = szuk / 10;
	}
}

