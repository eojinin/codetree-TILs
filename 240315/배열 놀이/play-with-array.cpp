#include<iostream>
using namespace std;

int main() {
	int n, q;
	cin >> n >> q;
	int arr[100] = {};

	for (int i = 0; i < n; i++) {
		cin >> arr[i];
	}

	for (int i = 0; i < q; i++) {
		int q_type;
		cin >> q_type;
		if (q_type == 1) {
			int a;
			cin >> a;
			cout << arr[a - 1] << endl; //1
		}
		else if (q_type == 2) {
			int a, cnt = 0;
			cin >> a;
			for (int j = 1; j <= n; j++) { //2
				if (arr[j - 1] == a) {
					cnt++;
					cout << j << endl;
					break;
				}
			}
			if (cnt == 0) {
				cout << "0" << endl;
			}
		}
		else if (q_type == 3) {
			int a, b;
			cin >> a >> b;
			for (int i = a; i <= b; i++) {
				cout << arr[i - 1] << " ";
			}
            cout << endl;
		}
	}
        return 0;
}