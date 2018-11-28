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

void normalize(int num[], int size)
{
    int min = (size+1);
    for(int i=0; i<size; ++i)
    {
    //    cout << num[i] << " " << endl;
        if(num[i] < min)
            min = num[i];
    }
    //cout << "min was found to be " << min << endl;
    for(int i=0; i<size; ++i)
        num[i] -= (min-1);
    return;
}

int check_right(int right[], int num[], int size)
{
    for(int i=0; i<size; ++i)
    {
        int temp = 0;
        for(int j=i+1; j<size; ++j)
        {   
            if(num[j] > num[i])
                ++temp;
        }
        if(temp != right[i])
            return 0;
    }
    return 1;
}

int check_left(int left[], int num[], int size)
{
    for(int i=0; i<size; ++i)
    {
        int temp = 0;
        for(int j=0; j<i; ++j)
        {
            if(num[j] > num[i])
                ++temp;
        }
        if(temp != left[i])
            return 0;
    }
    return 1;
}

int main()
{
    fast;
    int n; cin >> n;
    int left[n]; int right[n]; int num[n]; int sum[n]; int order[n];
    for(int i=0; i<n; ++i)
    {
        order[i] = i;
        sum[i]=0;
        cin >> left[i];
    }
    for(int j=0; j<n; ++j)
    {
        cin >> right[j];
        sum[j] += (left[j]+right[j]);
    }
    vector <pii> vii;
    for(int k=0; k<n; ++k)
        vii.pb(mp(sum[k],order[k]));
    sort(all(vii));
    for(int y=0; y<n; ++y)
        num[vii[y].ss] = n - vii[y].fs;
    normalize(num,n);
   // for(int data=0; data<n; ++data)
     //   cout << num[data] << " ";
    if(check_left(left,num,n) && check_right(right, num, n))
    {
        cout << "YES" << endl;
        for(int t=0; t<n; ++t)
            cout << num[t] << " ";
    }
    else
        cout << "NO" << endl;
    return 0;
}
