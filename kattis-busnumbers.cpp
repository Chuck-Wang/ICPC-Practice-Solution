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

    set<int> s;

    for (int i = 0; i < n; i++) {
        int a;
        cin >> a;
        s.insert(a);
    }

    int first = -1;
    int last = -1;
    for (auto it : s) {
        if (first == -1) {
            first = it;
            last = it;
        } else {
            if (it == last + 1) {
                last += 1;
            } else {
                if (first == last) {
                    cout << first << " ";
                } else if (first + 1 == last) {
                    cout << first << " " << last << " ";
                } else {
                    cout << first << "-" << last << " ";
                }
                first = it;
                last = it;
            }
        }
    }

    if (first == last) {
        cout << first << " ";
    } else if (first + 1 == last) {
        cout << first << " " << last << " ";
    } else {
        cout << first << "-" << last << " ";
    }

    return 0;
}
