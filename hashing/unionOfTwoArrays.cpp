// Union of two un-sorted arrays

#include<bits/stdc++.h>
using namespace std;

#define speedy ios_base::sync_with_stdio(0);cin.tie(0)

int unionOf2Arrays(int a[], int b[], int m, int n) {
    unordered_set<int>s(a, a+m);
    for (int i = 0; i < n; i++) {
        s.insert(b[i]);
    }
    return s.size();
}

void decode()
{
    speedy;
    int m, n;
    cin >> m >> n;
    int a[m], b[n];
    for(int i = 0; i < m; i++){
        cin >> a[i];
    }
    for(int i = 0; i < n; i++){
        cin >> b[i];
    }
    cout << unionOf2Arrays(a, b, m, n) << endl;
}

int32_t main()
{
    decode();
    return 0;
}
