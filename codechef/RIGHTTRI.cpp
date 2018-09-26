//
//
//

#define sr squareRoot
#include<bits/stdc++.h>
using namespace std;

double squareRoot(long long int number,long long int precision)         //Finding square root till precision decimals 
{ 
    long long int start = 0;
    long long int end = number; 
    long double mid = 2; 
    double ans; 
    int counter = 0;
    while (start <= end && counter<50) 
    { 
        ++counter;
        //cout << "now the ans is " << ans << endl;
        mid = ((long double)start + end) / 2; 
        if (mid * mid == number) 
            { ans = mid; break; } 
        if ((mid*mid) < number) 
            { start = mid; ans = mid;} 
        else 
            end = mid; 
    } 
    double increment = 0.1; 
    for (int i = 0; i < precision; i++)
    { 
        while (ans * ans <= number) 
            ans += increment;  
        ans -= increment; 
        increment /= 10; 
    } 
   // cout << "The square root of " << number << "is " << ans << endl;
    return ans; 
}


int main()
{
    int T; cin >> T;
    for (;T--;)
    {
        int H; cin >> H; long int S; cin >> S;

        if(H<sr(4*S,5))
        {
       //     cout << "H is " << H << endl;
     //       cout << "sr(4*S,3) is " << sr(4*S,3) << endl;
            cout << -1 << '\n';
        }
        else
        {
            double a,b;
            long long int D = (long long int)H * (long long int)H;
            long int E1 = D + 4*S;
            long int E2 = D - 4*S;
            double e1 = sr(E1,5);
            double e2 = sr(E2,5);
            a = (e1+e2)/2.0;
            b = (e1-e2)/2.0;
            cout <<fixed << setprecision(9) << b << ' ' << a << ' ' << (double)H << '\n'; 
        }
    }
    return 0;
}
