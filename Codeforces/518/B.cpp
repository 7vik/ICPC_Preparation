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

ll nd(ll n) 
{ 
    int c = 0; 
    for (ll i=1; i<=sqrt(n); i++) 
        if(n%i==0) 
        { 
            if (n/i==i) c++; 
            else  c+=2; 
        } 
    return c; 
} 

int main()
{
    ll b; cin >> b;
    cout << nd(b) << endl;
    return 0;
}
