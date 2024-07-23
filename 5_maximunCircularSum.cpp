#include <iostream>
using namespace std;

int main() {

	int a[] = { 1, 2, -1, 4, -10, 6, 3, -20, 4, 1};
	int n = sizeof(a) / sizeof(int);

	// 1. Find the maximum sum using normal kadanes
	int ans = 0;
	int sum = 0;
	for (int i = 0; i < n; ++i)
	{
		sum += a[i];

		if (sum < 0) {
			sum = 0;
		}

		if (sum > ans) {
			ans = sum;
		}
	}

	// 2. Circular array mei maximum sum ho sakta hai
	int ans2 = 0, totalSum = 0;
	// 1. Total sum of array nikalo
	for (int i = 0; i < n; ++i)
	{
		totalSum += a[i];
		// 2. Flip all the sign of a[i]s
		a[i] *= -1;
	}
	// 3. Now find the maximum sum in flipped array, that would be the minimumSum
	// in original array
	int sum2 = 0;

	for (int i = 0; i < n; ++i)
	{
		sum2 += a[i];

		if (sum2 < 0) {
			sum2 = 0;
		}

		if (sum2 > ans2) {
			ans2 = sum2;
		}
	}

	int op1 = ans;
	int op2 = totalSum + ans2;
	cout << max(op1, op2) << endl;

	return 0;
}