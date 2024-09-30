#include <iostream>
using namespace std;

int arr[101];

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);

    int n, m;
    cin >> n >> m;

    for(int i=1; i<=n; i++){
        cin >> arr[i];
    }

    for(int i=0; i<m; i++){
        int a1, a2;
        cin >> a1 >> a2;

        int sum = 0;
        for(int j=a1; j<=a2; j++){
            sum += arr[j];
        }
        cout << sum << '\n';
    }
}