using namespace std;
#include <bits/stdc++.h>

//#define int long long int
#define ll long long int
#define ull unsigned long long int
#define dd double


#define scl(x) scanf("%lld", &x)
#define scll(x, y) scanf("%lld %lld", &x, &y)
#define scd(x) scanf("%lf", &x)
#define scdd(x, y) scanf("%lf %lf", &x, &y)

#define prl(x) printf("%lld\n", x)
#define prll(x, y) printf("%lld %lld\n", x, y)

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
ll n, m, k, kount;
ll a, b, c, ans;
ll x, y, z;

/*_________________________________________________________________________________________*/

int main(){
    int test;
    cin >> test;

    while(test--){
        int n;
        cin >> n;

        int twos = 0, odds = 0;

        if(n == 1){
            cout << "FastestFinger" << endl;
            continue;
        }

        if(n == 2){
            cout << "Ashishgup" << endl;
            continue;
        }

        if(n & 1){
            cout << "Ashishgup" << endl;
            continue;
        }

        while(n % 2 == 0){
            n /= 2;
            twos++;
        }

        for(int i = 3; i*i <= n; i += 2){
            if(n % i == 0){
                while(n % i == 0){
                    n /= i;
                    odds++;
                }
            }
        }
        if(n != 1) odds++;

        if(twos > 1 && odds == 0){
            cout << "FastestFinger" << endl;
            continue;
        }

        if(twos > 1){
            cout << "Ashishgup" << endl;
            continue;
        }

        if(odds == 1){
            cout << "FastestFinger" << endl;
            continue;
        }


        cout << "Ashishgup" << endl;

    }
}

/*******************************************************************************************/

