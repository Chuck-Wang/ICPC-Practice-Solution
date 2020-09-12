#include <iostream>
using namespace std;

int main() {
    int n;
    cin >> n;
    for (int i = 0; i < n; i++) {
        int k, x;
        cin >> k >> x;
        cout << k << " " << (x * (x+1)) /2 << " " << (x * (x+1)) - x << " " << (x * (x+1)) << endl;
    }
    return 0;
}
