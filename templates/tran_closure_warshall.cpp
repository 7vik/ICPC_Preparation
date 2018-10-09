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

#define V 4 //The number of vertices

void printSolution(int reach[V][V])
{
    cout << "Following matrix is transitive closure of the given graph\n";
    for (int i = 0; i < V; i++)
    {
        for (int j = 0; j < V; j++)
            cout << reach[i][j];
        cout << '\n';
    }
}

// Prints transitive closure of graph[][] using Floyd Warshall algorithm
void transitiveClosure(int graph[V][V])
{
    int reach[V][V], i, j, k;
    for (i = 0; i < V; i++)
        for (j = 0; j < V; j++)
            reach[i][j] = graph[i][j];
    for (k = 0; k < V; k++)
        for (i = 0; i < V; i++)
            for (j = 0; j < V; j++)
                reach[i][j] = reach[i][j] || (reach[i][k] && reach[k][j]);
    printSolution(reach);
}

int main()                                      //tester program
{
    int graph[V][V] = { {1, 1, 0, 1},
                        {0, 1, 1, 0},
                        {0, 0, 1, 1},
                        {0, 0, 0, 1}
                      };
    transitiveClosure(graph);
    return 0;
}
