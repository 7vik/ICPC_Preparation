#include<bits/stdc++.h>
using namespace std;

typedef     long long int      ll;
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

ll bs(ll start, ll end, ll min, ll M)
{
    ll ans=1;
    ll mid = (start+end)/2;
    while((ans*M < min) || ((ans-1)*M >= min))
    {
        mid = (start+end)/2;
        if(ans*M<min)
            start = ans+1;
        else if((ans-1)*M >= min)
            end = ans-1;
        ans = mid;
    }
    return ans;
}

int main()
{
    fast;
    ll N,M,K,L; cin >> N >> M >> K >> L;
    ll min = K+L;     
    ll maxPer = N / M;
    if(maxPer < 1 || min > (M*maxPer))
    {
        cout << "-1" << endl;
        return 0;
    }
    cout << bs(1,(min/M)+1,min,M) << endl;
    return 0;
}
