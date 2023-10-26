#ifndef ADJACENCYLISTGRAPH_H
#define ADJACENCYLISTGRAPH_H
#include <iostream>

using namespace std;

struct vertexNode
{
    char vertexData;
    int weight;
    vertexNode* next;

    vertexNode(char data, int weight)
    {
        vertexData = data;
        this->weight = weight;
        next = nullptr;
    }
};

struct List
{
    char listData;
    vertexNode* vertexConnection;
    List* nextInList;

    List(char data)
    {
        listData = data;
        vertexConnection = nullptr;
        nextInList = nullptr;
    }
};

class AdjacencyListGraph
{
    private:
        int verticesCount;
        List* adjList;
        

    public:
        AdjacencyListGraph();
        void addVertex(char data);
        bool findVertex(char data);
        void addEdge_Undirected(char start, char destination, int weight);


};

#endif