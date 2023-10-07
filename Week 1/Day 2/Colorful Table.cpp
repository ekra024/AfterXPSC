#include<bits/stdc++.h>
using namespace std;
typedef long long int ll;
#define gcd(a,b)  __gcd(a,b)
#define lcm(a,b) a/(b/__gcd(a,b))
#define optimize() ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#include<ext/pb_ds/assoc_container.hpp>
#include<ext/pb_ds/tree_policy.hpp>
using namespace __gnu_pbds;
template <typename T> using pbds = tree<T, null_type, less<T>,rb_tree_tag, tree_order_statistics_node_update>;
int mod = 1e9 + 7;
const int N=1e5 + 123;

int main()
{
    optimize();
    ll t; cin >> t;
    while(t--) {
        ll n, k; cin >> n >> k;
        vector<pair<ll,ll> > a;
        for(ll i = 1; i <= n; i++) {
            ll x; cin >> x;
            a.push_back({x, i});
        }

        sort(a.begin(), a.end());
        vector<ll> mn(n+1), mx(n+1);
        ll mxx = 0, mnn = INT_MAX;

        for(ll i = n-1; i >= 0; i--) {
            mxx = max(mxx, a[i].second);
            mnn = min(mnn, a[i].second);
            mx[i] = mxx;
            mn[i] = mnn;
        }
        map<ll,ll> mp;

        for(ll i = 0; i < n; i++) {
            ll r = mx[i] - mn[i] + 1;
            ll val = a[i].first;
            mp[val] = max(mp[val], r*2);
        }

        for(ll i = 1; i <=k; i++) cout << mp[i] << ' ';
        cout << '\n';

    }
}


