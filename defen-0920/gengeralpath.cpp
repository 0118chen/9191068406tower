#include "gengeralpath.h"

gengeralpath::gengeralpath()
{
    int check(int x, int y, int(*map)[13])//检查此位置是否可以走
    {
        if (x < 0 || y < 0 || x >= 10 || y >= 10 || (map[x][y] != 1 &&map[x][y] != 4&&map[x][y]!=2))
            return 0;

        return 1;
    }
    //深度优先搜索
    bool visited[MaxVnum];
void DFS(Graph G,int v)
{
    visited[v]= true; //从V开始访问，flag它
    printf("%d",v);    //打印出V
    for(int j=0;j<G.vexnum;j++)
        if(G.arcs[v][j]==1&&visited[j]== false) //这里可以获得V未访问过的邻接点
            DFS(G,j); //递归调用，如果所有节点都被访问过，就回溯，而不再调用这里的DFS
}

void DFSTraverse(Graph G) {
    for (int v = 0; v < G.vexnum; v++)
        visited[v] = false; //刚开始都没有被访问过

    for (int v = 0; v < G.vexnum; ++v)
        if (visited[v] == false) //从没有访问过的第一个元素来遍历图
            DFS(G, v);
}

}
