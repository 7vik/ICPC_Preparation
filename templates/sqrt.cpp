#include<bits/stdc++.h>
using namespace std;

float squareRoot(long long int number,long long int precision)         //Finding square root till precision decimals 
{ 
    long long int start = 0;
    long long int end = number; 
    long double mid = 2; 
    double ans; 
    int counter = 0;
    while (start <= end && counter<50) 
    { 
        ++counter;
        cout << "now the ans is " << ans << endl;
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
    cout << "The square root of " << number << "is " << ans << endl;
    return ans; 
}

int main()
{
    cout << "Enter number:" << endl;
    long long int T; cin >> T;
    cout << '\n' << "It's square root is:" << squareRoot(T, 3) << endl;
    return 0;
}
