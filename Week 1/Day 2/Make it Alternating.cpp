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
int mod = 998244353;
const int N=1e5 + 123;

int main()
{
    optimize();
    ll t; cin >> t;
    while(t--) {
        string s; cin >> s;
        ll extra = 0, n = s.size(), fact = 1, res = 1, r = 0;
        vector<ll> a;
        for(ll i = 0; i < n-1; i++) {
            if(s[i] == s[i+1])extra++;
            else {
                r += extra;
                extra++;
                res = (res%mod * extra%mod)%mod;
                extra = 0;
            }
        }

        if(extra != 0) {
            r += extra;
            extra++;
            res = ((res%mod)*(extra%mod))%mod;
        }

        for(ll i = 1; i <= r; i++) {
            fact = ((fact%mod)*(i%mod))%mod;
        }
        res = ((res%mod)*(fact%mod))%mod;

        cout << r << ' '<< res << '\n';
     }
}


