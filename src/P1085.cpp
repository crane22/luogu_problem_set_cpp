#include <iostream>

using namespace std;

int main() {
    cin.tie(nullptr);
    ios::sync_with_stdio(false);

    int school[7], extra[7];
    for(int i = 0; i < 7; i++) {
        cin >> school[i] >> extra[i];
    }

    int max_unhappyness = 0, flag = 0;
    for(int i = 0; i < 7; i++) {
        int total = school[i] + extra[i];
        if(total > 8) {
            if(max_unhappyness < total){
                max_unhappyness = total;
                flag = i + 1;
            }
        }
    }

    cout << flag << endl;

    return 0;
}