#include <iostream>
using namespace std;

int main() {
    int n;
    cin >> n;
    for (int i = 0; i < n; i++) {
        int x;
        unsigned long long sum=0;
        cin >> x;

        for (int j = 0; j < x; j++) {
            unsigned long long in;
            cin >> in;
            sum += in % x;
            sum = sum % x;
        }

        if (sum % x == 0) {
            cout << "YES"<< endl;
        } else {
            cout << "NO"<< endl;
        }
    }
    return 0;
}
