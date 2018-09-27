//Vectors
//Greedy
//Partially Correct

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
    int T; cin >> T;
    for(;T--;)
    {
        int N,D, i=0; cin >> N >> D;
        int arrive[N];
        int teach[N];
        int sadness[N];
        int choose[D];
        long long int totalSadness = 0;
        for(;i<N;)
        {
            cin >> arrive[i] >> teach[i] >> sadness[i];
            ++i;
        }
        vector <int> v;
        for(int j=1; j<=D; ++j)                      //For each day
        {
            for(int k=0; k<N; ++k)
                if(arrive[k]<=j && teach[k]>0)                   //Kth person is available to teach on Jth day 
                    v.pb(k);
            int maxsad=0;
            int winner;
            for(;!v.empty();)
            {
                int temp = sadness[v.back()];
                if(temp > maxsad)
                {
                    winner = v.back();
                    maxsad = temp;
                }
                v.pop_back();
            }
            choose[j-1] = winner;
            --teach[winner];
        }
        for(int j=0; j<N; ++j)
            while(teach[j]>0)
            {
                totalSadness += sadness[j];
                --teach[j];
            }
        cout << totalSadness << '\n';
    }
    return 0;
}
