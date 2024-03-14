#include<iostream>
using namespace std;

int main() {
	int n, q;
	cin >> n >> q;

	int* arr = new int[n];
	for (int i = 0; i < n; i++) {
		cin >> arr[i];
	}

	int a, a1, b, a2;
	int fir, sec, thi;
	cin >> fir >> a1;
	cin >> sec >> a2;
	cin >> thi >> a >> b;

	cout << arr[a1-1] << endl; //1

	int cnt = 0;
	for (int i = 1; i <= n; i++) { //2
		if (arr[i-1] == a2) {
			cnt++;
			if (cnt > 1)
				break;
			cout << i;
			break;
		}
	}
	if (cnt == 0) {
		cout << "0";
	}

	cout << endl;
	for (int i = a; i <= b; i++) {
		cout << arr[i-1] << " ";
	}
	return 0;
}