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
bitset<N>Composite;

void primeGen(int n)
{
    n += 100;
    for(int i = 3; i <= n; i+=2) is_prime[i] = 1;

    int sq = sqrt(n);

    for(int i = 3; i <= sq; i+=2) {
        if(is_prime[i]){
            for(int j = i*i; j <= n; j+=(i+i)){
                is_prime[j] = 0;
            }
        }
    }
    is_prime[2] = 1;
    prime.push_back(2);

    for(int i = 3; i <= n; i+=2) {
        if(is_prime[i]) prime.push_back(i);
    }
}

bool NOD(ll n)
{
    int ret = 1, c = 0;
    for(auto p : prime) {
        if(1LL*p*p > n) break;
        bool ok = false;

        if(n%p==0) {
            ok = true;
            int cnt = 1;

            while(n%p==0) {
                n/=p;cnt++;
            }
            ret *= cnt;
        }
        if(ok) c++;
    }

    if(n > 1) ret *= 2;
    int rr = ret - c - 1;
    return (rr > c);
}

int main()
{
    optimize();
    ll t; cin >> t;
    while(t--) {
        int n; cin >> n;
        vector<int> a(n);
        for(int i = 0; i < n; i++) cin >> a[i];

    }
}


