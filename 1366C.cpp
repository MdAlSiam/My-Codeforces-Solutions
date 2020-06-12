#include <bits/stdc++.h>
using namespace std;

int test;
int n, m;
int grid[36][36];
int level[36][36];
int zerokountinlevel[100];
int onekountinlevel[100];
int ans;

int main(){

    cin >> test;

    while(test--){

        cin >> n >> m;

        memset(zerokountinlevel, 0, sizeof(zerokountinlevel));
        memset(onekountinlevel, 0, sizeof(onekountinlevel));

        for(int i = 1; i <= n; i++){
            for(int j = 1; j <= m; j++){
                cin >> grid[i][j];
                if(i == 1 && j == 1) level[i][j] = 1;

                if(i+1 <= n) level[i+1][j] = level[i][j]+1;
                if(j+1 <= m) level[i][j+1] = level[i][j]+1;

                zerokountinlevel[ level[i][j] ] += grid[i][j] == 0;
                onekountinlevel[ level[i][j] ] += grid[i][j] == 1;
            }
        }

        ans = 0;

        int lo = 1, hi = n+m-1;

        while(lo < hi){
            ans += min( zerokountinlevel[lo]+zerokountinlevel[hi]
                       , onekountinlevel[lo]+onekountinlevel[hi]  );

            lo++;
            hi--;
        }

        cout << ans << endl;

    }
}
