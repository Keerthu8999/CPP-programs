#include<iostream>
#include<bits/stdc++.h>
#define INF 0x3f3f3f3f
using namespace std;
typedef pair<int,int> iPair;
class Graph
{
int V;
list<pair<int,int> >*adj;
public:
Graph(int V);
void addEdge(int u,int v,int w);
void Prim();
};
Graph::Graph(int V)
{
this->V=V;
adj=new list<iPair>[this->V];
}
void Graph::addEdge(int u,int v,int w)
{
adj[u].push_back(make_pair(v,w));
adj[v].push_back(make_pair(u,w));
}
void Graph::Prim()
{
priority_queue<iPair,vector<iPair>,greater<iPair> >pq;
int src=0;
vector<int>key(V,INF);
vector<int>parent(V,-1);
vector<bool>inMST(V,false);
pq.push(make_pair(0,src));
key[src]=0;
while(!pq.empty())
{
int u=pq.top().second;
pq.pop();
inMST[u]=true;
list<pair<int,int> >::iterator it;
for(it=adj[u].begin();it!=adj[u].end();it++)
{
int v=(*it).first;
int weight=(*it).second;
if(!inMST[v]&&key[v]>weight)
{
key[v]=weight;
pq.push(make_pair(key[v],v));
parent[v]=u;
}
}
}
for(int i=1;i<V;i++)
cout<<parent[i]<<"-->"<<i<<endl;
}
int main(){
    int V = 5;
    Graph g(V);
    g.addEdge(0,1,3);
    g.addEdge(0,2,2);
    g.addEdge(1,2,1);
    g.addEdge(1,3,4);
    g.addEdge(2,4,1);
    g.addEdge(3,4,2);
    g.Prim();
    return 0;
}
