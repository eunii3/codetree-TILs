#include <iostream>
#include <string>
using namespace std;

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);
    
    string s, t;
    cin >> s >> t;

    int res = -1;

    for(int i=0; i<=s.length()-t.length(); i++){
        bool found = true;
        for(int j=0; j<t.length(); j++){
            if(s[i+j]!=t[j]){
                found = false;
                break;
            }
        }
        if(found){
            res = i;
            break;
        }
    }
    cout << res << '\n';
}