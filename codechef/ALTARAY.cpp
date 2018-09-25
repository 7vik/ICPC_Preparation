//Very Basic DP 
//Stacks
//Fast Comparision of 2 numbers' signs

#include<bits/stdc++.h>
using namespace std;
int main()
{
    int T; cin >> T;
    for(;T--;)
    {
        int N; cin >> N; int N2 = N;
        int lengths[N];                 //Kth elem will store longest length starting at Kth elem in stack
        int count = 1;
        stack <int> s;
        int temp;
        for(;N--;)                      //Input the array as a stack
        {
            cin >> temp;
            s.push(temp);
        }
        for(;!s.empty();)
        {
            if((s.top()^temp) < 0)
                ++count;
            else
                count = 1;
            lengths[s.size()-1] = count;
            temp = s.top();
            s.pop();
        }
        for(int i=0; i<N2; ++i)
            cout << lengths[i] << " ";
        cout << '\n';
    }
    return 0;
}
