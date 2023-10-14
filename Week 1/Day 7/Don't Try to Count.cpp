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
        ll n, m, cnt = 0; cin >> n >> m;
        string x, s; cin >> x >> s;

        while(x.size() < s.size()) {
            x += x;
            cnt++;
        }
        cout << x << '\n';

        if(x.size() == s.size() && x != s) {
            cnt++; x += x;
        }
        cout << x << '\n';

        ll l = 0, r = 1;
        bool ok = true;
        ll mx = 0, c = 0;

        for(ll i = 0; i < x.size(); i++) {
            if(l == m) break;
            if(x[i] == s[l]) {
                c++;
                l++;
            }
            else {

                mx = max(c, mx);
                c = 0;
            }
        }
        mx = max(c, mx);

        if(mx != m) {
            x += x;cnt++;
        }
        cout << x << '\n';
        mx = 0, c = 0, l = 0;
        for(ll i = 0; i < x.size(); i++) {
            if(x[i] == s[l]) {
                c++;
                l++;
            }
            else {

                mx = max(c, mx);
                c = 0;
            }
        }

        mx = max(c, mx);
        if(mx == m) cout << cnt << '\n';
        else cout << -1 << '\n';
    }
}

