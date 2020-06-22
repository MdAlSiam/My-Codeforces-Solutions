#include <bits/stdc++.h>
using namespace std;

int main()
{
    int test;
    cin >> test;

    while(test--){
        int n;
        cin >> n;
        int play[n], vict[n];
        for(int i = 0; i < n; i++)
            cin >> play[i] >> vict[i];

        bool yes = true;

        if(play[0] < vict[0]) yes = false;

        for(int i = 1; i < n; i++){

            if(play[i] < play[i-1]) yes = false;
            if(vict[i] < vict[i-1]) yes = false;

            if(play[i] - play[i-1] < vict[i] - vict[i-1]) yes = false;
        }

        if(yes) cout << "YES" << endl;
        else cout << "NO" << endl;
    }
}
