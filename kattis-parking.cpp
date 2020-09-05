#include <iostream>
using namespace std;

int main() {
    int a, b, c, i1, i2, i3, o1, o2, o3;
    cin >> a >> b >> c >>i1 >> o1 >> i2 >> o2 >> i3 >> o3;
    int time[101] = {0};
    for (int i = i1; i < o1; i++) {
        time[i]++;
    }
    for (int i = i2; i < o2; i++) {
        time[i]++;
    }
    for (int i = i3; i < o3; i++) {
        time[i]++;
    }
    long count = 0;
    for (int i = 1; i < 101; i++){
        if (time[i] == 1) {
            count += a;
        } else if (time[i] == 2) {
            count += 2 * b;
        } else if (time[i] == 3) {
            count += 3 * c;
        }
    }
    cout << count;
    return 0;
}
