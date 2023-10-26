#include <iostream>
#include "AdjacencyListGraph.h"

using namespace std;

int main()
{
    AdjacencyListGraph graph;

    // add A through I to represent the vertices in graph
    graph.addVertex('A');
    graph.addVertex('B');
    graph.addVertex('C');
    graph.addVertex('D');
    graph.addVertex('E');
    graph.addVertex('F');
    graph.addVertex('G');
    graph.addVertex('H');
    graph.addVertex('I');

    // add the edges to the connecting vertices for UNDIRECTED GRAPH!                        
    graph.addEdge_Undirected('A', 'B', 16);
    graph.addEdge_Undirected('A', 'C', 8);
    graph.addEdge_Undirected('B', 'E', 7);
    graph.addEdge_Undirected('B', 'H', 3);
    graph.addEdge_Undirected('C', 'D', 4);
    graph.addEdge_Undirected('C', 'E', 5);
    graph.addEdge_Undirected('E', 'H', 7);
    graph.addEdge_Undirected('E', 'G', 6);
    graph.addEdge_Undirected('E', 'F', 12);
    graph.addEdge_Undirected('F', 'I', 3);
    graph.addEdge_Undirected('G', 'I', 1);

    

    return 0;
}