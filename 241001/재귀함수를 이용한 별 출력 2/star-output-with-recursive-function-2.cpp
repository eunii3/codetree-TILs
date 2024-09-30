#include <iostream>
using namespace std;

void printStarsDescending(int n) {
    if (n <= 0) return;

    for (int i = 0; i < n; i++) {
        cout << "* ";
    }
    cout << '\n';

    printStarsDescending(n - 1);
}

void printStarsAscending(int n) {
    if (n <= 0) return;
        cout << "* ";
    \}
    cout << '\\n';
\}

int main() {
    int n;
    cin >> n;

    printStarsDescending(n);

$0

    printStarsAscending(n - 1);

    for (int i = 0; i < n; i++) {
        cout << "* ";
    }
    cout << '\n';
}

int main() {
    int n;
    cin >> n;

    printStarsDescending(n);
    printStarsAscending(n);

    return 0;
}