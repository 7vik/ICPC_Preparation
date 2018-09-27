#include<bits/stdc++.h>
using namespace std;

typedef     long long      ll;
typedef     long double    ld;
typedef     pair<int,int>  pii;
typedef     pair<ll,ll>    pll;

#define     pb             push_back
#define     mp             make_pair
#define     fs             first
#define     ss             second
#define     all(v)         v.begin(),v.end()
#define     fast           ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);

int main()
{
	fast;

	int T; cin>>T;

	for(;T--;)
	{
		ld h,s;
		cin>>h>>s;
		if(h*h-4*s<0) cout<<-1<<'\n';
		else
		{
			ld a=sqrt(h*h-4*s);
			ld b=sqrt(h*h+4*s);
			ld B=(a+b)/2;
			ld H=(b-a)/2;
			cout<<fixed<<setprecision(9)<<H<<' '<<B<<' '<<h<<'\n';
		}
	}
    return 0;
}
