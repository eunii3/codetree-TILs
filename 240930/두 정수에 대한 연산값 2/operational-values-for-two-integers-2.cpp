#include <iostream>

using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);

    int a, b, small, big;
    cin >> a >> b;

    if(a<b){
        small = a;
        big = b;

    }else{
        small = b;
        big = a;
    }

    cout << small + 10 << " " << big * 2 << "\n";

    return 0;
}