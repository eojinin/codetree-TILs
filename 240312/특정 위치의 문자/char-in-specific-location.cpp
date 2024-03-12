#include<iostream>
using namespace std;

int main() {
	char word[6] = { 'L','E','B','R','O','S' };
	char c;
	cin >> c;

    int index = -1;
	for (int i = 0; i < 6; i++) {
		if (word[i] == c)
			index = i;
	}

    if(index == -1)
        cout << "None";
    else 
        cout << index;
	return 0;
}