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
        ll l, r, a;
        cin >> l >> r >> a;
        ll div = r/a;
        ll res = (div*a)-1;
        ll ans1 = 0, ans2 = 0;
        if(l <= res)ans1 = (res/a) + res%a;
        ans2 = r/a + r%a;

        //cout << ans1 << ' '<< ans2 << '\n';
        cout << max(ans1, ans2) << '\n';
    }
}

