// dsu_temple.cpp

#include <iostream>
using namespace std;
const int MAX = 114514; // 节点的数量，可修改，这里是 OI 中一种常见的方法
int dsu[MAX];           // 这里使用数组存储节点的父节点，索引代表节点编号
// 有的板子使用结构体，大同小异，但在基础并查集操作中使用数组就够了

/*初始化*/
inline void dsu_init()
{
    for (int i = 0; i < MAX; i++)
    {
        dsu[i] = i; // 父节点设为自己
    }
}

/*传入节点 index，找到根节点*/
int find_basic(int a)
{
    if (a == dsu[a])
    {
        return a;
    }
    else
    {
        return find_basic(dsu[a]);
    }
    // 很简单的递归，如果自己是根节点就返回自己，否则再次查找父节点的祖先
}

/*带路径优化的查找，入参为节点 index，返回祖先 index*/
int find(int a)
{
    if (a == dsu[a])
    {
        return a;
    }
    else
    {
        dsu[a] = find_basic(dsu[a]);
        return dsu[a];
    }
}

/*传入两棵树的根节点，以最直接方式合并这两棵树*/
inline void merge(int a, int b)
{
    dsu[b] = a;
}

int main()
{
    // freopen("xxx.in", "r", stdin);
    // freopen("xxx.out", "w", stdout);
    /*
     * ios::sync_with_stdio(0);
     * cin.tie(0);// 调代码的时候记得注释这两行，会造成 stream 和传统 IO 顺序混乱
     */
    // -----------------------------------------
    dsu_init();

    /*You code here.*/

    // -----------------------------------------
    // fclose(stdin);
    // fclose(stdout);
    return 0;
}
