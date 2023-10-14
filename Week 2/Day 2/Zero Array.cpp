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
    ll t = 1;// cin >> t;
    while(t--) {
        int n; cin >> n;
        map<int,int> mp;

        for(int i = 0; i < n; i++) {
            int x; cin >> x;
            mp[x]++;
        }
        bool ok = true;

        for(auto it : mp) {
            if(it.second == 1) {
                ok = false; break;
            }
        }


        if(ok) cout << "YES\n";
        else cout <<"NO\n";
    }
}


