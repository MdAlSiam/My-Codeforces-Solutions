using namespace std;
#include <bits/stdc++.h>

#define ll long long int
#define dd double

#define scl(x) scanf("%lld", &x)
#define scll(x, y) scanf("%lld %lld", &x, &y)
#define scd(x) scanf("%lf", &x)
#define scdd(x, y) scanf("%lf %lf", &x, &y)

#define prl(x) printf("%lld\n", x)
#define prll(x, y) printf("%lld %lld\n", x, y)
#define prys printf("YES\n")
#define prno printf("NO\n")

#define For(i, x, y) for(ll i = x; i < y; i++)
#define Mem(ara, x) memset(ara, x, sizeof(ara))

#define pb push_back
#define pll pair <ll, ll >
#define ff first
#define ss second

#define maxn 200005 ///2x10^5 // n*log n in 1 sec
//#define maxn 1000006 ///10^6
//#define maxn 1000000009 ///10^9

#define pi acos(-1.00)
#define eps 0.0000000001 ///10^-10
#define inf LONG_LONG_MAX
#define mod 1000000007 ///10^9+7

/*******************************************************************************************/

ll t, test, temp;
ll n, m, k, kount[10];
ll a, b, c, ans;
ll x, y, z = -1;

string str;
vector<ll> pos[10];
ll cumtable[10][maxn];


/*_________________________________________________________________________________________*/

int main(){
while(scl(test) == 1){
while(test--){

    For(i, 0, 10) pos[i].clear();

    cin >> str;
    str = '#' + str;

    For(i, 1, str.length()){
        pos[str[i]-'0'].pb(i);
    }

    for(ll i = 0; i < 10; i++){
        for(ll j = 0; j < str.length(); j++){
            if(j == 0){
                cumtable[i][j] = 0;
                continue;
            }
            if(j == 1){
                cumtable[i][j] = (str[j]-'0' == i);
                continue;
            }
            cumtable[i][j] = cumtable[i][j-1] + (str[j]-'0' == i);
        }
    }

    ll maxlen = 0;

    for(ll i = 0; i < 10; i++){

        ll sz = pos[i].size();
        ll same = sz;
        maxlen = max(maxlen, same);

        for(ll j = i+1; j < 10; j++){

            //prev

            ll pairkount = 0;

            for(ll k = 0; k < pos[i].size(); k++){

                ll curr_pos = pos[i][k];

                ll ase;
                if(k == 0)
                    ase = cumtable[j][curr_pos-1];
                else
                    ase = cumtable[j][curr_pos-1] - cumtable[j][pos[i][k-1]];

                if(ase > 0) pairkount++;
            }


            maxlen = max(maxlen,  2 * ( min(pairkount, sz) ) );

            //next

            pairkount = 0;

            for(ll k = 0; k < pos[i].size(); k++){

                ll curr_pos = pos[i][k];

                ll ase;
                if(k == pos[i].size() - 1)
                    ase = cumtable[j][str.size()-1] - cumtable[j][curr_pos];
                else
                    ase =  cumtable[j][pos[i][k+1]-1] - cumtable[j][curr_pos];

                if(ase > 0) pairkount++;

            }

            maxlen = max(maxlen,  2 * ( min(pairkount, sz) ) );

        }
    }

    //prl(maxlen);

    prl(str.size() - 1 - maxlen);
}
}}

/*******************************************************************************************/

