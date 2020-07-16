#include <bits/stdc++.h>
using namespace std;

int main(){

    int n;

    cin >> n;

    int t1, t2;

    cin >> t1 >> t2;

    int kount = 0;

    for(int i = 1; ; i++){
        if(i % t1 == 0 && i % t2 == 0){
            kount += 2;
            if(kount >= n){
                cout << kount << " " << i << endl;
                break;
            }
        }
        else if(i % t1 == 0){
            kount++;
            if(kount >= n){
                cout << kount+1 << " " << i - (i%t2) + t2 << endl;
                break;
            }
        }
        else if(i % t2 == 0){
            kount++;
            if(kount >= n){
                cout << kount+1 << " " << i - (i%t1) + t1 << endl;
                break;
            }
        }

    }
}
