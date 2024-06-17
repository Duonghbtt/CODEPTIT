// Nguyen Huu Quang Hoa - B21DCCN379
#include <bits/stdc++.h>
using namespace std;

using ll = long long;

int v, e, s, t;
bool visited[1005];
int parent[1005];
vector<int> adj[1005];

void BFS(int u)
{
    visited[u] = true;
    queue<int> q;
    q.push(u);
    while (!q.empty())
    {
        int k = q.front();
        q.pop();
        for (auto x : adj[k])
        {
            if (!visited[x])
            {
                visited[x] = true;
                parent[x] = k;
                q.push(x);
            }
        }
    }
}

void findPath(int s, int t)
{
    if (!visited[t])
        cout << -1;
    else
    {
        vector<int> res;
        while (t != s)
        {
            res.push_back(t);
            t = parent[t];
        }
        res.push_back(s);
        for (int i = res.size() - 1; i >= 0; i--)
        {
            cout << res[i] << " ";
        }
    }
    cout << endl;
}
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);
    int test;
    cin >> test;
    while (test--)
    {
        cin >> v >> e >> s >> t;
        for (int i = 1; i <= v; i++)
        {
            adj[i].clear();
            visited[i] = false;
            parent[i] = 0;
        }
        for (int i = 1; i <= e; i++)
        {
            int x, y;
            cin >> x >> y;
            adj[x].push_back(y);
            adj[y].push_back(x);
        }
        BFS(s);
        findPath(s, t);
    }
    return 0;
}