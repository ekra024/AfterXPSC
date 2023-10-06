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
    ll n, m; cin >> n >> m;
    if(n >= m) cout << n - m << '\n';
    else {
        ll ans = 0;
        while(m > n) {
            if(m%2)m++, ans++;
            else m/=2, ans++;
        }
        if(m != n) ans += n-m;
        cout << ans << '\n';
    }
}


