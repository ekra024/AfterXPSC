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
        int n,k; cin>>n>>k;
        string s; cin>>s;
        vector<int> a(n,0);
        int tmp=k;
        for(int i=0;i<n && tmp>0;i++)
        {
            if(k%2==s[i]-'0')
            {
                a[i]=1;
                tmp--;
            }
        }

        a[n-1]+=tmp;

        for(int i=0;i<n;i++)
        {
            if((k-a[i])%2==1)   s[i]='1'-(s[i]-'0');
        }

        cout<< s <<'\n';
        for(auto& it:a)  cout<< it <<" ";
        cout<<'\n';

    }
}


