#include <bits/stdc++.h>
using namespace std;

int main(){
    long long int test;
    scanf("%lld", &test);
    long long int a;
    string b;
    while(scanf("%lld", &a) == 1){
        cin >> b;
        bool allnine = true;
        for(long long int i = 0; i < b.length(); i++){
            if(b[i] != '9') allnine = false;
        }
        if(allnine) cout << a*(b.length()) << endl;
        else cout << a*(b.length()-1) << endl;
    }
}
