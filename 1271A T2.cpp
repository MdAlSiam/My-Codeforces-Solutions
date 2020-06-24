#include <bits/stdc++.h>
using namespace std;

int a, b, c, d, e, f, taken, ans1, ans2;

int main(){
    cin >> a >> b >> c >> d >> e >> f;

    taken = min(a,d);
    ans1 = taken*e;
    ans1 += min(b, min(c, d-taken))*f;

    taken = min(b, min(c, d));
    ans2 = taken*f;
    ans2 += min(a, d-taken)*e;

    cout << max(ans1, ans2) << endl;
}
