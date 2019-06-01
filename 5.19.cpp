//5.19

void psum1(float a[], float p[], long n)  //p[i] = a[i] + (sum of all a[j] s.t. j < i)
{
	long i;
	/* last_val holds p[i-1]; val holds p[i] */

	float last_val, val;
	float v0, v1, v2, v3;
	//float v4, v5, v6, v7;

	last_val = p[0] = a[0];

	for (i = 1; i < n - 4; i++) {
		v0 = last_val + a[i];
		v1 = v0 + a[i + 1];
		v2 = v1 + a[i + 2];
		v3 = v2 + a[i + 3];
		//v4 = v3 + a[i + 4];
		//v5 = v4 + a[i + 5];
		//v6 = v5 + a[i + 6];

		p[i] = v0;
		p[i + 1] = v1;
		p[i + 2] = v2;
		p[i + 3] = v3;
		//p[i + 4] = v4;
		//p[i + 5] = v5;
		//p[i + 6] = v6;
		val = last_val + a[i];

		last_val = val;

	}

	for (; i < n; i++) {
		last_val += a[i];
		p[i] = last_val;
	}

}

int main() {
	float a[6] = { 1.0, 2.0, 3.0, 4.0, 5.0, 6.0 };
	float p[6];
	p = a;
	int n = 6;
	psum1(a, p, n);

}