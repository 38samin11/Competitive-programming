#include <bits/stdc++.h>
using namespace std;

int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int n; cin >> n;
    vector<long long> prefix(n);
    for(int i = 0; i < n; i++){
        cin >> prefix[i];
        if(i) prefix[i] += prefix[i-1];
    }

    int m; cin >> m;
    while(m--){
        long long q; cin >> q;
        int idx = lower_bound(prefix.begin(), prefix.end(), q) - prefix.begin();
        cout << (idx + 1) << "\n";
    }

    return 0;
}

