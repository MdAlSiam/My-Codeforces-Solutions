#include <bits/stdc++.h>
using namespace std;

set<int> sett;

int main(){
    int test;
    scanf("%d", &test);

    while(test--){
        sett.clear();
        int n;
        scanf("%d", &n);
        for(int i = 0; i < n; i++){
            int t;
            scanf("%d", &t);
            sett.insert(t);
        }
        cout << sett.size() << endl;
    }
}
