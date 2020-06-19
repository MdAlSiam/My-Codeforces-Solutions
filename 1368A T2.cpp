#include <bits/stdc++.h>
using namespace std;

int main(){

    int test;
    cin >> test;

    while(test--){

        int a, b, n;
        cin >> a >> b >> n;

        if(a <= b);
        else swap(a, b);

        int kount = 0;

        while(1){
            a += b;
            kount++;
            if(a > n) break;

            b += a;
            kount++;
            if(b > n) break;
        }

        cout << kount << endl;

    }
}
