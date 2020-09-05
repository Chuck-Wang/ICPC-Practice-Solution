#include <iostream>
using namespace std;

int main() {
    int a,b,c;
    cin >> a >> b >> c;
    for (int i = 1; i <= c; i++){
        if (i%a == 0){
            cout << "Fizz";
        }
        if (i%b == 0){
            cout << "Buzz";
        }
        if (i%a != 0 and i%b !=0){
            cout << i;
        }
        cout << endl;
    }
}
