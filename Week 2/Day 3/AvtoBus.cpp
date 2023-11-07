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
const int N = 1e7 + 123;
bitset<N> is_prime;
vector<int>prime;
int ans[N];

int main()
{
    optimize();
    ll t; cin >> t;
    while(t--) {
        ll n; cin >> n;
        ll mx = 0, mn = 0, ans = 0;
        if(n%2==1 || n%2==3 || n < 4) ans = -1;
        else {
            mx = (n/4);
            mn = (n/6);
            if(n%6) mn++;
        }

        if(ans == -1) cout << ans << '\n';
        else cout << mn << ' '<< mx << '\n';
    }
}


