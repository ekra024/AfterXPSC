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
        ll a, b; cin >> a >> b;
        ll ans = 0, move = 0;

        if(a == b) {
            cout << "0 0\n";
            continue;
        }
        if(b > a) swap(a, b);
        ll n = a - b;

        ll mn =  min(a%n, n-a%n);

        cout << n << ' '<< mn << '\n';
    }
}


