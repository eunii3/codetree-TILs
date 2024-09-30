#include <iostream>

using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);

    int a, b;
    cin >> a >> b;

    if(a<b){
        a = a + 10;
        b = b * 2;
    }else{
        a = a * 2;
        b = b + 10;
    }

    cout << a << " " << b << "\n";

    return 0;
}