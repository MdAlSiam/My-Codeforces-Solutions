#include <bits/stdc++.h>
using namespace std;

int main(){
    int test;
    cin >> test;

    while(test--){
        int n, x, y;
        cin >> n >> x >> y;

        int mini, maxi;
        if(n == 1){
            mini = maxi = 1;
        }
        else if(x+y == n+1){
            mini = 2;
            maxi = n;
        }
        else if(x+y < n+1){
            mini = 1;
            maxi = x+y-1;
        }
        else{
            mini = x+y-n+1;
            if(mini == n+1) mini--;
            maxi = n;
        }

        cout << mini << " " << maxi << endl;
    }
}
