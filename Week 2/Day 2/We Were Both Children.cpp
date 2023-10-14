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
const int N = 2e5 + 123;
bitset<N> is_prime;
vector<int>divisor[N];
int ans[N];

void Divisors(int n)
{
    for(int i = 1; i <= n; i++) {
        for(int j = i; j <= n; j += i) {
            divisor[j].push_back(i);
        }
    }
}



int main()
{
    optimize();
    int limit = 2e5;
    Divisors(limit);

    ll t; cin >> t;
    while(t--) {
        map<int,int>mp;
        int n; cin >> n;

        for(int i = 0; i < n; i++) {
            int x; cin >> x;
            mp[x]++;
        }
        int ans = 0;

        for(int i = n; i >= 0; i--) {
            vector<int> divisors = divisor[i];
            int frog = 0;
            for(auto it : divisors) {
                frog += mp[it];
            }

            ans = max(ans, frog);
        }

        cout << ans << '\n';
    }
}


