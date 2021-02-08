/// In the name of Allah SWT

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
#define prYes printf("YES\n")
#define prNo printf("NO\n")
#define aNewLine printf("\n")

#define ON(n, i) (n|(1LL<<i))
#define OFF(n, i) (n&(~(1LL<<i)))
#define CHK(n, i) (n&(1LL<<i))

#define For(i, x, y) for(ll i = x; i < y; i++)
#define Mem(ara, x) memset(ara, x, sizeof(ara))

#define pb push_back
#define pll pair<ll, ll >
#define ff first
#define ss second

#define maxn 200005LL ///2x10^5 + 5
//#define maxn 1000006LL ///10^6 + 6
//#define maxn 1000000009LL ///10^9 + 9

#define pi acos(-1.00)
#define eps 0.0000000001 ///10^-10
#define inf LONG_LONG_MAX
#define mod 1000000007LL ///10^9+7

ll t, test, temp;
ll n, m, k, kount;
ll a, b, c, ans, u, v;
ll x, y, z = -1, maxi, mini;

ll ara[maxn];
string str;

void solve() {
    // Wrong Solution
    ll heroPower, heroHealth;
    scll(heroPower, heroHealth);
    scl(n);
    ll monsterPower[n], monsterHealth[n];
    For (i, 0, n) scl(monsterPower[i]);
    For (i, 0, n) scl(monsterHealth[i]);

    bool safe = true;
    
    For (i, 0, n) {
        ll attackRequired = (monsterHealth[i]+heroPower-1)/heroPower;
        if (heroHealth > 0 and heroHealth - (attackRequired-1)*monsterPower[i] > 0);
        else safe = false;
        heroHealth -= attackRequired*monsterPower[i];
        // printf("-> %lld", heroHealth);
    }

    if (safe) prYes;
    else prNo;
}

void solve2() {
    ll heroPower, heroHealth;
    scll(heroPower, heroHealth);
    scl(n);
    pll monster[n];
    For (i, 0, n) scl(monster[i].ff); // power
    For (i, 0, n) scl(monster[i].ss); // health

    sort(monster, monster+n);

    bool isSafe = true;

    For (i, 0, n) {
        ll attackRequired = (monster[i].ss+heroPower-1)/heroPower;
        if (heroHealth > 0 and heroHealth-((attackRequired-1)*monster[i].ff) > 0) {}
        else {isSafe = false; break;}

        heroHealth -= attackRequired*monster[i].ff;
    }

    if (isSafe) prYes;
    else prNo;
}

int main() {
    test = 1;
    scl(test);
    while (test--) solve2();
}

