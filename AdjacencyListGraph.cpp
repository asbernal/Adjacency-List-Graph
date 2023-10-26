#include "AdjacencyListGraph.h"

AdjacencyListGraph::AdjacencyListGraph(){
    verticesCount = 0;
    adjList = nullptr;
}

void AdjacencyListGraph::addVertex(char data){
    //search if its in the list
    if(adjList == nullptr)
    {
        adjList = new List(data);
    }
    else
    {
        // you can call findVertex() to make sure user doesn't add a duplicate vertex, I don't in this example

        List* curr = adjList;
        while(curr->nextInList != nullptr)
        {
            curr = curr->nextInList;
        }
        curr->nextInList = new List(data);
    }
    verticesCount++;
}
void AdjacencyListGraph::addEdge_Undirected(char start, char destination, int weight){
    
    // make sure list isn't empty
    if(adjList == nullptr)
    {
        return;
    }
    else
    {
        // find start and destination location in adjList. Update both of their connections for undirected graph
        List* curr = adjList;
        while(curr->nextInList != nullptr)
        {
            // add the connection Vertex (destination) and weight to the adjList at correct position (start)
            if(curr->listData == start)
            {   
                // check if the connecttion list is empty
                if(curr->vertexConnection == nullptr)
                {
                    curr->vertexConnection = new vertexNode(destination, weight);
                }
                else
                {
                    vertexNode* currVertex = curr->vertexConnection;
                    while(currVertex != nullptr)
                    {
                        currVertex = currVertex->next;
                    }
                    currVertex = new vertexNode(destination, weight);
                }
            }
            // add the connection Vertex (start) and weight to the adjList at correct position (destination)
            if(curr->listData == destination)
            {   
                // check if the connecttion list is empty
                if(curr->vertexConnection == nullptr)
                {
                    curr->vertexConnection = new vertexNode(start, weight);
                }
                else
                {
                    vertexNode* currVertex = curr->vertexConnection;
                    while(currVertex != nullptr)
                    {
                        currVertex = currVertex->next;
                    }
                    currVertex = new vertexNode(start, weight);
                }
            }
            curr = curr->nextInList;
        }   
    }
    return;
}
bool AdjacencyListGraph::findVertex(char data){

    if(adjList == nullptr)
    {
        return false;
    }
    else{
        List* curr = adjList;

        while(curr != nullptr)
        {
            if(curr->listData == data)
            {
                return true;
            }
        }
    }
    return false;
}