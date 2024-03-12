#include<iostream>
using namespace std;

int main() {
	char word[6] = { 'L','E','B','R','O','S' };
    int index = 0;
	char c;
	cin >> c;

	for (int i = 0; i < 6; i++) {
		if (word[i] == c)
			cout << i;
        else
            index = -1;
	}

    if(index == -1)
        cout << "None";
	return 0;
}