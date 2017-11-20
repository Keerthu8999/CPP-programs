#include<iostream>
#include<list>
using namespace std;
class Graph
{
	int V;
	list<int>*adj;
	public:
	Graph(int V);
	void addEdge(int u,int v);
	void DFT(int v);
	void DFSUtil(int v,bool visited[]);
};
Graph::Graph(int V)
{
	this->V=V;
	adj=new list<int>[V];
}
void Graph::addEdge(int u,int v)
{
	adj[u].push_back(v);
}
void Graph::DFT(int v)
{
	bool *visited=new bool[V];
	for(int i=0;i<V;i++)
		visited[i]=false;
	DFSUtil(v,visited);
}
void Graph::DFSUtil(int v,bool visited[])
{
	visited[v]=true;
	cout<<v<<" ";
	list<int>::iterator it;
	for(it=adj[v].begin();it!=adj[v].end();it++)
	{
		if(!visited[*it])
		{
//			visited[*it]=true;
			DFSUtil(v,visited);
		}
	}
}
int main()
{
	Graph g(4);
	g.addEdge(0,1);
	g.addEdge(0,2);
	g.addEdge(1,2);
	g.addEdge(2,0);
	g.addEdge(2,3);
	g.addEdge(3,3);
	return 0;
}


