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
    ll n; cin >> n;
    ll cnt1 = 0, cnt2 = 0;
    bool ok = true;
    for(ll i = 0; i < n; i++) {
        ll x; cin >> x;
        if(x == 100) {
            if(cnt1 && cnt2) {
                cnt1--; cnt2--;
            }
            else if(cnt1 >= 3) {
                cnt1 -= 3;
            }
            else ok = false;

        }
        else if(x == 50) {
            if(cnt1) {
                cnt1--; cnt2++;
            }
            else ok = false;
        }
        else cnt1++;
    }

    if(ok) cout << "YES\n";
    else cout << "NO\n";
}


