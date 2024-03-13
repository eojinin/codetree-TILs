#include<iostream>
using namespace std;

int main() {
	int n, m;
	cin >> n >> m;

	int *arr_num = new int[n];
	for (int i = 0; i < n; i++) {
		cin >> arr_num[i];
	}

	int cnt = 0;
	for (int i = 0; i < n; i++) {
		if (arr_num[i] == m)
			cnt++;
	}

	cout << cnt;
	return 0;
}