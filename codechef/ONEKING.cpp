#include<bits/stdc++.h>
using namespace std;

typedef     long long      ll;
typedef     long double    ld;
typedef     pair<int,int>  pii;
typedef     pair<ll,ll>    pll;

int gcd (int a, int b) {return b ? gcd (b, a % b) : a;}
int lcm (int a, int b) {return a / gcd(a, b) * b;}

#define     pb             push_back
#define     mp             make_pair
#define     fs             first
#define     ss             second
#define     all(v)         v.begin(),v.end()
#define     fast           ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);

int main()
{
    fast;
    int T; cin >> T;
    for(;T--;)  
    {
        int N,a,b,count=0,l=1000000000; cin >> N;
        vector <pii> v;
        for(int i=0; i<N; ++i)
        {
            cin >> a >> b;
            v.push_back(pii(b,a));
            if(a<l) l=a;
        }
        l--;
        sort(v.begin(), v.end());
        for(int i=0; i<N; ++i)
            if(v[i].second > l)
            {
                ++count;
                l=v[i].first;
            }
        cout << count << endl;
    }
    return 0;
}






