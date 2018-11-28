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
    int x,y,z,t1,t2,t3; cin >> x >> y >> z >> t1 >> t2 >> t3;
    int stair_time = abs(x-y)*t1;
    int elevator_time = 3*t3 + t2*(abs(y-x)+abs(z-x));
    if(stair_time < elevator_time)
        cout << "NO" << endl;
    else cout << "YES" << endl;
    return 0;
}
