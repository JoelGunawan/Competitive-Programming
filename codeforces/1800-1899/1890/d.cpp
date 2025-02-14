// header file
#include <bits/stdc++.h>
#include <ext/pb_ds/assoc_container.hpp>
#include <ext/pb_ds/tree_policy.hpp>
// pragma
#pragma GCC optimize("Ofast")
#pragma GCC optimize("unroll-loops")
// macros
#define endl "\n"
#define ll long long
#define mp make_pair
#define ins insert
#define lb lower_bound
#define pb push_back
#define ub upper_bound
#define lll __int128
#define fi first
#define se second
using namespace std;
using namespace __gnu_pbds;
typedef tree<int, null_type, less_equal<int>, rb_tree_tag, tree_order_statistics_node_update> ordered_multiset;
typedef tree<int, null_type, less<int>, rb_tree_tag,tree_order_statistics_node_update> ordered_set;
int main() {
    ios_base::sync_with_stdio(0); cin.tie(NULL);
    int t;
    cin >> t;
    while(t--) {
        ll n, c;
        cin >> n >> c;
        ll a[n + 1];
        for(int i = 1; i <= n; ++i) {
            cin >> a[i];
        }
        priority_queue<pair<ll, int>, vector<pair<ll, int>>, greater<pair<ll, int>>> pq;
        for(int i = 2; i <= n; ++i) {
            pq.push(mp(i * c - a[i], i));
        }
        while(pq.size() && a[1] >= pq.top().fi) {
            a[1] += a[pq.top().se];
            pq.pop();
        }
        if(pq.size())
            cout << "No" << endl;
        else
            cout << "Yes" << endl;
    }
    return 0;
}