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

void primeGen(int n)
{
    n += 100;
    for(int i = 3; i <= n; i += 2) is_prime[i] = 1;

    for(int i = 3; i <= sqrt(n); i += 2) {
        if(is_prime[i]) {
            for(int j = i*i; j <= n; j += (i+i)) {
                is_prime[j] = 0;
            }
        }
    }

    is_prime[2] = 1;
}

int main()
{
    optimize();
    int limit = 1e5;
    primeGen(limit);

    ll t; cin >> t;
    while(t--) {
        int n; cin >> n;
        vector<int> a(n);
        ll cnt = 0, one = 0;
        bool one1 = false, one2 = false;
        for(int i = 0; i < n; i++) {
            cin >> a[i];
            if(a[i] == 1) one++;
        }

        for(int i = 0; i < n; i++) {
            if(is_prime[a[i]] && one >= 2) {
                cnt += (one* (one-1))/2;
            }
        }

        cout << cnt << '\n';
    }
}


