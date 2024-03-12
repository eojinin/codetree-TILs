#include <iostream>
using namespace std;

struct Covid {
    char sym;
    int tem;
};

int main() {
    struct Covid p[3] = { {'Y', 38}, {'N', 36}, {'Y', 40}};
    int count_arr[5] = {};
   // for (int i = 0; i < 3; i++)
     //   cin >> p[i].sym >> p[i].tem;

    int type_num = 0;
    for (int i = 0; i < 3; i++) {
        if (p[i].sym = 'Y' && p[i].tem >= 37)
            type_num = 1;
        else if (p[i].tem < 37)
            type_num = 3;
        else if (p[i].sym = 'N')
            type_num = 2;
        else
            type_num = 4;
        count_arr[type_num]++;
    }
    
    for (int i = 1; i <= 4; i++) {
        cout << count_arr[i] << " ";
    }
    if (count_arr[1] >= 2)
        cout << "E";

    return 0;
}