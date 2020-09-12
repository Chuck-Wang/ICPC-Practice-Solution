#include <iostream>
#include <cmath>
#include <vector>
using namespace std;

int main() {
    int n, q;
    cin >> n >> q;

    vector<bool> primes(n+1, true);
    int count = 0;
    int m = sqrt(n);

    primes[0] = false;
    primes[1] = false;

    for (int i = 2; i <= m; i++) {
        if (primes[i]) {
            count++;
            for (int j = 2 * i; j <= n; j += i) {
                primes[j] = false;
            }
        }
    }

    for (int i = m+1; i <= n; i++) {
        if (primes[i]) {
            count++;
        }
    }

    cout << count << endl;

    for (int i = 0; i < q; i++) {
        int query;
        cin >> query;
        cout << primes[query] << endl;
    }
    return 0;
}
