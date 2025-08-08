#include <iostream>
#include <string>
#include <cmath>
using namespace std;

int main() {
    cout << max(4, 10) << "\n";
    cout << min(2, 20) << "\n";
    cout << sqrt(64) << "\n";
    cout << round(8.8) << "\n";
    cout << log(9) << "\n";
    cout << (9 > 3) << "\n";
    int x = 34, y = 45;
    if (x > y) {
        cout << "x is greater than y\n";
    } else {
        cout << "y is greater than x\n";
    }
    string name;
    do {
        cout << "input your name";
        cin >> name;
    } while (name != "muqoddim");
}