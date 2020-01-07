name: CI

on: [push]

jobs:
  build:

    runs-on: ubuntu-latest

    steps:
    - uses: actions/checkout@v1
    - name: Run a one-line script
      run: echo Hello, world!
    - name: Run a multi-line script
      run: |
        echo Add other actions to build,
        echo test, and deploy your project.
#include <stdio.h>
#include <math.h>
int main(void) {
	int i, j;
	double a, n, sum = 0;;
	scanf("%lf %lf", &a, &n);
	for (i = 0; i < n; i++) {
		sum = sum + a * pow(10, i);
		for (j = 1; j < n - i; j++) {
			sum = sum + a * (pow(10, j - 1));
		}
	}
	printf("s = %.0lf", sum);
}
