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
    int n,max=0,count=0,i,j;
     string s;
     char c1,c2,s1,s2;
     cin>>n>>s;
     for(i=0;i<n-1;i++)
     {
         c1=s[i];
         c2=s[i+1];
         for(j=i+1;j<n;j++){
            if(c1==s[j] && c2==s[j+1])
            {
                count++;
            }
         }
         if(count>=max)
         {max=count;
         s1=c1;
         s2=c2;
         }
         count=0;
    }
     cout<<s1<<s2<<'\n';
}


