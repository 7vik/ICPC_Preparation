//union-find algo
//to find if graph contains cycles or not

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

struct Edge                                 //structure to store edges of the graph
{
    int src, dest;
};

struct Graph                                //structure to store graphs
{
    int V, E;
    struct Edge* edge;                      //"edge" is an array of struct Edges
};

struct Graph* createGraph(int V, int E)     //creates a Graph with V vertices and E edges
{
    struct Graph* graph = (struct Graph*) malloc(sizeof(struct Graph));
    graph -> V = V; graph -> E = E;
    graph -> edge = (struct Edge*) malloc((sizeof(struct Edge)) * (graph->E));
    return graph;
}

int find(int parent[], int i)               //To find the subset of an element i
{
    if(parent[i] == -1)
            return i;
    return find(parent, parent[i]);
}

void Union(int parent[], int x, int y)      //To do union of 2 subsets
{
    int xset = find(parent, x);
    int yset = find(parent, y);
    parent[xset] = yset;
    return;
}

int isCycle(struct Graph* graph)            //To tell whether a given graph has a cycle or not
{
    int* parent = (int*) malloc((graph->V)*sizeof(int));
    memset(parent, -1, sizeof(int) * graph->V);
     for(int i = 0; i < graph->E; ++i)
    {
        int x = find(parent, graph->edge[i].src);
        int y = find(parent, graph->edge[i].dest);
        if (x == y)
            return 1;
        Union(parent, x, y);
    }
    return 0;
}

int main()
{
    /* Let us create the following graph
         0
        |  \
        |    \
        1-----2 */
    int V = 3, E = 3;
    struct Graph* graph = createGraph(V, E);

    // add edge 0-1
    graph->edge[0].src = 0;
    graph->edge[0].dest = 1;

    // add edge 1-2
    graph->edge[1].src = 1;
    graph->edge[1].dest = 2;

    // add edge 0-2
    graph->edge[2].src = 0;
    graph->edge[2].dest = 2;

    if (isCycle(graph))
        printf( "graph contains cycle" );
    else
        printf( "graph doesn't contain cycle" );

    return 0;
}




