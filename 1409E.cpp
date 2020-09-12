#include <bits/stdc++.h>
using namespace std;

void merge_sort(int* ara, int lo, int hi) {
    if (lo == hi) {
        return;
    }

    int mid = lo + ((hi - lo) / 2);
    merge_sort(ara, lo, mid);
    merge_sort(ara, mid+1, hi);

    int i, j, k, kk, temp[hi-lo+1];
    for (i = lo, j = mid+1, k = 0, kk = lo; kk <= hi; k++, kk++) {
        if (i == mid+1) {
            temp[k] = ara[j];
            j++;
        }
        else if (j == hi+1) {
            temp[k] = ara[i];
            i++;
        }
        else if (ara[i] < ara[j]) {
            temp[k] = ara[i];
            i++;
        }
        else {
            temp[k] = ara[j];
            j++;
        }
    }

    for (int kk = lo, k = 0; kk <= hi; kk++, k++) {
        ara[kk] = temp[k];
    }
}

void solve() {
    int n, k;
    scanf("%d %d", &n, &k);

    int ara[n+1];
    for (int i = 0; i < n; i++) {
        scanf("%d", &ara[i]);
    }

    int temp;
    for (int i = 0; i < n; i++) {
        scanf("%d", &temp);
    }

    merge_sort(ara, 0, n-1);

    int ans[n+1];
    int suffixmax[n+1];

    int i = 0, j = 1;
    while (i < n) {
        if (j == n or (ara[j] - ara[i]) > k) {
            ans[i] = j-i;
            i++;
        }
        else {
            j++;
        }
    }

    for (int i = n-1; i >= 0; i--) {
        if (i == n-1) {
            suffixmax[n-1] = ans[n-1];
            continue;
        }

        suffixmax[i] = max(ans[i], suffixmax[i+1]);
    }

    int maxans = 0;

    for (int i = 0; i < n; i++) {
        if (i+ans[i] < n) {
            int _ans = ans[i] + suffixmax[i+ans[i]];
            maxans = max(maxans, _ans);
        }
        else {
            maxans = max(maxans, ans[i]);
        }
    }

    printf("%d\n", maxans);
}

int main() {
    int test;
    scanf("%d", &test);

    while (test--) {
        solve();
    }
}
