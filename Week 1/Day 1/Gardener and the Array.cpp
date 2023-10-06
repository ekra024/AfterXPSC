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
        ll n; cin >> n;
        map<ll,ll> mp;
        vector<ll> a[n];
        bool ok = true;

        for(ll i = 0; i < n; i++) {
            ll k; cin >> k;
            for(ll j = 0; j < k; j++) {
                ll x; cin >> x;
                mp[x]++;
                a[i].push_back(x);
            }
        }

        for(auto it : a) {
            ll cnt = 0;
            for(auto it2 : it) {
                if(mp[it2] > 1) {
                    cnt++;
                }
            }
            if(cnt == it.size()) {
                cout << "YES\n";
                ok = false;
                break;
            }
        }

        if(ok) cout << "NO\n";
    }
}


