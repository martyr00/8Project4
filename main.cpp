#include <iostream>

using namespace std;

void reverse(int);

int main() {
    int natural;
    cin >> natural;

   reverse(natural);
}

void reverse(int natural) {
    int result = natural % 10;
    cout << result << " ";

    int next_arg = (natural - result) / 10;

    if (next_arg > 0) {
        reverse(next_arg);
    }
}