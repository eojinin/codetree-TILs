#include<iostream>
using namespace std;

int main() {
	int a, b;
	cin >> a >> b;
	int rem = 0;
	int arr[10] = {};

	while (a > 1) {
		rem = a % b;
		a /= b;
		arr[rem]++;
	}

	int val = 0;
	for (int i = 0; i < 10; i++) {
		val += (arr[i] * arr[i]);
	}
	cout << val;
	return 0;
}