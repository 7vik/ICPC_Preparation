#include<bits/stdc++.h>
int gcd (int a, int b) {
    return b ? gcd (b, a % b) : a;
}
int lcm (int a, int b) {
    return a / gcd(a, b) * b;
}
using namespace std;
int main()
{
	int T; cin >> T;
	for(;T--;)
	{	
		int a,b; cin >> a >> b;
		cout << gcd(a,b) << lcm(a,b) << endl;
	}
	return 0;
}
