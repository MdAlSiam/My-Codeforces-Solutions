#include <bits/stdc++.h>
using namespace std;

int main(){
    int n;
    cin >> n;

    cout << 3*n + 4 << endl;
    cout << "0 0" << endl;
    for(int i = 1; i <= n+1; i++){
        cout << i << " " << i << endl;
        cout << i << " " << i-1 << endl;
        cout << i-1 << " " << i << endl;
    }
}
