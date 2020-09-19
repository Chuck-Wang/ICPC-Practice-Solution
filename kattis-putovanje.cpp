#include <cstdio>
#include <cmath>
#include <vector>
#include <iostream>
#include <algorithm>
#include <iterator>
#include <stack>
#include <map>
#include <queue>
#include <string>
#include <list>
#include <set>
#include <unordered_map>
#include <cstring>
#include <ctime>
#include <bitset>
#include <cassert>
using namespace std;

int main() {
    unsigned long long n, c;
    cin >> n >> c;

    vector<int> v(n);

    for (int i = 0; i < n; i++) {
        int a;
        cin >> a;
        v[i] = a;
    }

    int max_count = -1;
    for (int i = 0; i < n; i++) {
        unsigned long long remaining = c;
        int cur = i;
        int count = 0;
        while ((cur < n) && (remaining > 0)) {
            if (v[cur] <= remaining) {
                remaining -= v[cur];
                count++;
            }
            cur++;
        }
        max_count = max(max_count, count);
    }
    cout << max_count;
}
