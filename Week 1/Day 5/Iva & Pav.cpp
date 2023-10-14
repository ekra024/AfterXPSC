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
const int N=2e5 + 123;
ll pre_count[32][N+2];

ll solve(ll l, ll r)
{
    ll ans = 0;
    for(ll i = 0; i < 32; i++) {
        ll x;
        if(l == 0) x = pre_count[i][r];
        else x = pre_count[i][r] - pre_count[i][l-1];
        if(x == r-l+1) ans = (ans|(1 << i));
    }
    return ans;
}


int main()
{
    optimize();
    ll t; cin >> t;
    while(t--) {
        ll n; cin >> n;
        vector<ll> a(n);
        for(ll i = 0; i < n; i++) cin >> a[i];

        for(ll i = 0; i < 32; i++) {
            pre_count[i][0] = ((a[0]>>i) & 1);
            for(ll j = 1; j < n; j++) {
                pre_count[i][j] = ((a[j] >> i) & 1);
                pre_count[i][j] += pre_count[i][j-1];
            }
        }

        ll q; cin >> q;
        while(q--) {
            ll l, k; cin >> l >> k;

            ll low = l-1, high = n-1, ans = -1;
            while(low <= high) {
                ll mid = (high-low)/2 + low;
                ll res = a[mid] & a[l-1];

                if(solve(l-1, mid) >= k) {
                    ans = mid+1;
                    low = mid + 1;
                }
                else high = mid -1;
            }
            cout << ans << ' ';
        }
        cout << '\n';
    }
}


