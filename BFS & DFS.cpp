
void Graph::BFS(int s)
{
bool *visited=new bool[V];
for(i=0;i<V;i++)
visited[i]=false;
list<int>queue;
visited[s]=true;
queue.push_back(s);
while(!queue.empty())
{
s=queue.front();
cout<<s<<" ";
queue.pop_front(s);
list<int>iterator i;
for(i=adj[s].begin();i!=adj[s].end();i++)
{
if(!visited[*i])
{
visited[*i]=true;
queue.push_back(*i)'
}
}
}
}

void Graph::DFS(int v)
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
list<int>iterator i;
for(i=adj[v].begin();i!=adj[v].end();i++)
if(!visited[*i])
DFSUtil(v,visited);
}

/*HASHING INSERTION AND DISPLAY*/
void insert(int x)
{

