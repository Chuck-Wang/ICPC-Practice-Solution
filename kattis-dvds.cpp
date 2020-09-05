#include <iostream>
using namespace std;

int main() {
    long long n;
    cin >> n;
    for (int i = 0; i < n; i++) {
        long long len;
        cin >> len;
        long long count = len;
        int expected = 1;
        int next;
        for (int j = 0; j < len; j ++) {
            cin >> next;
            if (next == expected) {
                count--;
                expected++;
            }
        }
        cout << count << endl;
    }
    return 0;
}
