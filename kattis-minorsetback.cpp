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
    int n;
    cin >> n;

    int g, c, eb, fs, gm;
    g = c = eb = fs = gm = 1;

    int tone[100000];

    for (int i = 0; i < n; i++) {
        float a;
        cin >> a;

        float idx = log((a / 440)) / log((pow(2.0, 1.0/12.0)));
        int id = round(idx);
        id = id + 120;
        id = id % 12;
        tone[i] = id;

        switch (id) {
            case 0:
                eb = 0;
                break;
            case 1:
                g = c = fs = 0;
                break;
            case 2:
                eb = gm = 0;
                break;
            case 3:
                fs = 0;
                break;
            case 4:
                g = c = eb = gm = 0;
                break;
            case 5:
                break;
            case 6:
                g = c = fs = 0;
                break;
            case 7:
                eb = gm = 0;
                break;
            case 8:
                g = fs = 0;
                break;
            case 9:
                c = eb = gm = 0;

                break;
            case 10:
                fs = 0;
                break;
            case 11:
                g = c = gm = 0;
                break;}
    }

    if (g + c + eb + fs + gm == 1) {
        if (g == 1) {
            cout << "G major\n";
        } else if (c == 1) {
            cout << "C major\n";
        }
        else if (eb == 1) {
            cout << "Eb major\n";

        }
        else if (fs == 1) {
            cout << "F# minor\n";

        } else if (gm == 1) {
            cout << "G minor\n";
        }

        for (int i = 0; i < n; i++) {
            switch (tone[i]) {
                case 0:
                    cout << "A" << endl;
                    break;
                case 1:
                    cout << "Bb" << endl;
                    break;
                case 2:
                    cout << "B" << endl;
                    break;
                case 3:
                    cout << "C" << endl;
                    break;
                case 4:
                    cout << "C#" << endl;
                    break;
                case 5:
                    cout << "D" << endl;
                    break;
                case 6:
                    cout << "Eb" << endl;
                    break;
                case 7:
                    cout << "E" << endl;
                    break;
                case 8:
                    cout << "F" << endl;
                    break;
                case 9:
                    cout << "F#" << endl;
                    break;
                case 10:
                    cout << "G" << endl;
                    break;
                case 11:
                    if (eb == 1) {
                        cout << "Ab" << endl;
                    } else {
                        cout << "G#" << endl;
                    }
                    break;
            }
        }


    } else {
        cout << "cannot determine key\n";
    }
}
