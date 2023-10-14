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
        int n; cin >> n;
        vector<int> a(n);

        for(int i = 0; i < n; i++) cin >> a[i];
        ll cnt = 0;
        sort(a.begin(), a.end());

        for(int i = 0; i < n - 1; i++) {
            for(int j = i+1; j < n; j++) {
                if(gcd(a[i], 2*a[j]) > 1) cnt++;
            }
        }

        cout << cnt << '\n';
    }
}


