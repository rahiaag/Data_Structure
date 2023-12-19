#include <iostream>
using namespace std;

//FUNCTION BY DEFAULT USE STACK SO WE DON'T NEED TO USE STACK

int visited[7]={0,0,0,0,0,0,0};
int A[7][7]={
    {0,1,1,1,0,0,0},
    {1,0,1,0,0,0,0},
    {1,1,0,1,1,0,0},
    {1,0,1,0,1,0,0},
    {0,0,1,1,0,1,1},
    {0,0,0,0,1,0,0},
    {0,0,0,0,1,0,0}
};

void DFS(int i)
{
    int j;
    cout<<i<<" ";
    visited[i]=1;
    for (int j=0; i< 7;j++)
    {
        if (A[i][j]==1 && !visited[j]){
            DFS(j);
        }
    }
}

int main()
{
    //DFS Implementation
    DFS(4);
    return 0;

     
}