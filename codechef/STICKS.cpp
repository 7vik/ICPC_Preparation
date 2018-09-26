//Vector Practice
//Very Basic Sorting
//Corner Case

#include<bits/stdc++.h>
using namespace std;
int main()
{
    int T; cin >> T;
    for(;T--;)
    {
        int N; cin >> N;
        vector <int> v;
        int tempo;
        for(;N--;)
        {
            cin >> tempo;
            v.push_back(tempo);
        }
        sort(v.begin(), v.end());
        int max1 = 0; int max2 = 0; int temp;
        for(;!v.empty();)
        {
            temp = v.back();
            v.pop_back();
            if(temp == v.back())
            {
                if(temp > max1)
                {
                    max2 = max1;
                    max1 = temp;
                    v.pop_back();
                }
                else if (temp > max2)
                {
                    max2 = temp;
                    v.pop_back();
                }
                
            }
        }
        if(max1==0 || max2==0)
            cout << -1 << '\n';
        else 
            cout << max1 * max2 << '\n';
    }
    return 0;
}


