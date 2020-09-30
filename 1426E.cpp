#include <bits/stdc++.h>
using namespace std;

int main() {
    int n;
    cin >> n;
    int r1, s1, p1, r2,  s2, p2;
    cin >> r1 >> s1 >> p1;
    cin >> r2 >> s2 >> p2;

    // find the maximum
    int maxi = 0;
    maxi += min(r1, s2);
    maxi += min(s1, p2);
    maxi += min(p1, r2);

    // find the minimum
    int mini = 0;
    mini += min(r1, r2);
    r2 -= min(r1, r2);
    mini += min(s1, s2);
    s2 -= min(s1, s2);
    mini += min(p1, p2);
    p2 -= min(p1, p2);
    mini += min(r1, p2);
    mini += min(s1, r2);
    mini += min(p1, s2);

    cout << n-mini << " " << maxi << endl;
}
