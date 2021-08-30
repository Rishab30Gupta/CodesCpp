//We can calculate fibonacci of N in log(N) time using matrix exponentiation
void multiply (int mat1[2][2], int mat2[2][2]) {
	int res[2][2];
	res[0][0] = (mat1[0][0] * mat2[0][0]) + (mat1[0][1] * mat2[1][0]);
	res[0][1] = (mat1[0][0] * mat2[0][1]) + (mat1[0][1] * mat2[1][1]);
	res[1][0] = (mat1[1][0] * mat2[0][0]) + (mat1[1][1] * mat2[1][0]);
	res[1][1] = (mat1[1][0] * mat2[0][1]) + (mat1[1][1] * mat2[1][1]);

	mat1[0][0] = res[0][0];
	mat1[0][1] = res[0][1];
	mat1[1][0] = res[1][0];
	mat1[1][1] = res[1][1];
}

void c_r_g() {
	int n; cin >> n;
	if (n == 0) {
		cout << 0 << endl;
		return;
	}
	n = n - 1;
	int ans[2][2] = {{1, 0}, {0, 1}};
	int base[2][2] = {{1, 1}, {1, 0}};
	while (n != 0) {
		if (n % 2 == 0) {
			multiply(base, base);
			n = n / 2;
		}
		else {
			multiply(ans, base);
			n = n - 1;
		}
	}
	cout << ans[0][0];
}
