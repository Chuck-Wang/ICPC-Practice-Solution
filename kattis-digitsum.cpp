#include <iostream>
#include <cmath>
using namespace std;

long long calc(long long val) {
    long long pos = 1;
    long long result = 0;
    while (val / pos != 0) {
        result += (val / (pos * 10)) * 45 * pos;
        long long  dig;
        dig = (val / pos) % 10;
        result += (dig * (dig - 1)) / 2 * pos;
        result += dig * ((val % pos) + 1);
        pos = pos * 10;
    }
    return result;
}

int main() {
    long n;
    cin >> n;
    for (int i = 0; i < n; i++){
        long long a, b, x;
        cin >> a >> b;
        x = calc(b) - calc(a - 1);
        cout << x << endl;
    }
    return 0;
}
