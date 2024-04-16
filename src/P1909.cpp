#include <iostream>

using namespace std;

int main() {
    cin.tie(nullptr);
    ios::sync_with_stdio(false);

    int n = 0;
    int package_volume[3];
    int price[3];
    cin >> n;
    for(int i = 0; i < 3; i++) {
        cin >> package_volume[i] >> price[i];
    }

    int min_price = 0x7FFFFFFF;
    for(int i = 0; i < 3; i++) {
        int temp;
        if(n % package_volume[i] == 0) {
            temp = price[i] * n / package_volume[i];
        } else {
            temp = price[i] * (n / package_volume[i] + 1);
        }

        if(temp < min_price) {
            min_price = temp;
        }
    }

    cout << min_price << endl;

    return 0;
}