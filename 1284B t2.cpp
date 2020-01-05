#include <bits/stdc++.h>
using namespace std;

#define ll long long int
#define ull unsigned long long int
#define dd double

#define scl(x) scanf("%lld", &x)
#define scll(x, y) scanf("%lld %lld", &x, &y)
#define scd(x) scanf("%lf", &x)
#define scdd(x, y) scanf("%lf %lf", &x, &y)

#define pb push_back
#define pll pair <ll, ll >
#define ff first
#define ss second

#define maxn 200005 ///2x10^5
//#define maxn 1000006 ///10^6
//#define maxn 1000000009 ///10^9

#define pi acos(-1.00)
#define eps 0.0000000001 ///10^-10
#define inf LONG_LONG_MAX
#define mod 1000000007 ///10^9+7

ll n, m, k;
ll a, b, c;
ll x, y, z;
ll t, test;

int main(){//scl(test); while(test--){

    scl(n);

    ll type[n+4], first[n+4], last[n+4];

    ll good = 0, bad = 1, nutral = 2;

    for(ll i = 0; i < n; i++){ //moha input

        scl(m);
        ll temp[m+4];

        bool khalikomse = true;

        for(ll j = 0; j < m; j++){

            scl(temp[j]);

            if(j == 0){
                first[i] = temp[j];
                continue;
            }

            if(temp[j-1] >= temp[j]){}
            else khalikomse = false;

            if(j == m-1) last[i] = temp[j];

        }

        if(m == 1) {type[i] = nutral; continue;}
        if(khalikomse) type[i] = bad;
        else type[i] = good;

    } //moha input

//    for(ll i = 0; i < n; i++){
//        cout << "Test: " << i << " " << type[i] << " " << first[i] << " " << last[i] << endl;
//    }

    ll ans = 0;
//
//    for(ll i = 0; i < n; i++){
//        for(ll j = 0; j < n; j++){
//
//            if(type[i] == good){
//                ans += n;
//                break;
//            }
//
//            //D1
//            if(type[i] == bad && type[j] == good) ans++;
//
//            else if(type[i] == nutral && type[j] == good) ans++;
//
//            //A
//            if(type[i] == bad && type[j] == bad){
//                if(last[i] >= first[j]){}
//                else ans++;
//            }
//
//            //B
//            else if(type[i] == bad && type[j] == nutral){
//                if(last[i] >= first[j]){}
//                else ans++;
//            }
//
//            //C
//            else if(type[i] == nutral && type[j] == bad){
//                if(first[i] >= first[j]){}
//                else ans++;
//            }
//
//            //D
//            else if(type[i] == nutral && type[j] == nutral){
//                if(first[i] < first[j]) ans++;
//            }
//
//        }
//    } //calc ends


    ll gdk, bdk, ntk;
    gdk = bdk = ntk = 0;
    vector<ll> badfirst, badlast, nutralfirst;
    set <ll> shotru;
    for(ll i = 0; i < n; i++){
        if(type[i] == good) gdk++;
        else if(type[i] == bad) {
            bdk++;
            badfirst.pb(first[i]);
            badlast.pb(last[i]);
//            badfirst.insert(first[i]);
//            badlast.insert(last[i]);
        }
        else {
            ntk++;
            nutralfirst.pb(first[i]);
            shotru.insert(first[i]);
        }
    }

    ans += gdk*n;
    ans += bdk*gdk;
    ans += ntk*gdk;
    ll h = ntk-1;
    ans += (h*(h+1))/2;
    ll dup = nutralfirst.size() - shotru.size();
    ans -= dup;

    ll culprit = 0;

    sort(badfirst.begin(), badfirst.end());
    sort(badlast.begin(), badlast.end());
    sort(nutralfirst.begin(), nutralfirst.end());

    ll bfsz = badfirst.size(), blsz = badlast.size(), nfsz = nutralfirst.size();
    vector<ll>::iterator it;

    for(ll i = 0; i < blsz; i++){
        ll element = badlast[i];
        it = upper_bound(badfirst.begin(), badfirst.end(), element);
        if(it != badfirst.end())
        ans += bfsz - (it - badfirst.begin());
        culprit += (it - badfirst.begin());
    }

    for(ll i = 0; i < blsz; i++){
        ll element = badlast[i];
        it = upper_bound(nutralfirst.begin(), nutralfirst.end(), element);
        if(it != nutralfirst.end())
        ans += nfsz - (it - nutralfirst.begin());
        culprit += (it - nutralfirst.begin());
    }

    for(ll i = 0; i < nfsz; i++){
        ll element = nutralfirst[i];
        it = upper_bound(badfirst.begin(), badfirst.end(), element);
        if(it != badfirst.end())
        ans += bfsz - (it - badfirst.begin());
        culprit += (it - badfirst.begin());

    }

    for(ll i = 0; i < nfsz; i++){
        ll element = nutralfirst[i];
        it = upper_bound(nutralfirst.begin(), nutralfirst.end(), element);
//        if(it != badfirst.end())
//        ans += bfsz - (it - badfirst.begin());
        culprit += (it - nutralfirst.begin());

    }

    printf("%lld\n", n*n - culprit);


}//}



