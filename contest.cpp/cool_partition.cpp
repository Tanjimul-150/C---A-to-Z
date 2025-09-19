#include <bits/stdc++.h>
using namespace std;

typedef long long ll;

vector<vector<pair<int, ll>>> graph;

bool canConnect(int n, ll lowBound, ll highBound)
{
    vector<bool> visited(n + 1, false);
    deque<int> dq;
    dq.push_back(1);
    visited[1] = true;
    while (!dq.empty())
    {
        int cur = dq.front();
        dq.pop_front();
        if (cur == n)
            return true;
        for (auto &edge : graph[cur])
        {
            int nxt = edge.first;
            ll w = edge.second;
            if (!visited[nxt] && w >= lowBound && w <= highBound)
            {
                visited[nxt] = true;
                dq.push_back(nxt);
            }
        }
    }
    return false;
}

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin >> t;
    while (t--)
    {
        int n, m;
        cin >> n >> m;
        graph.assign(n + 1, vector<pair<int, ll>>());

        vector<ll> weights;
        vector<tuple<int, int, ll>> edges;
        for (int i = 0; i < m; i++)
        {
            int u, v;
            ll w;
            cin >> u >> v >> w;
            graph[u].push_back({v, w});
            graph[v].push_back({u, w});
            edges.push_back(make_tuple(u, v, w));
            weights.push_back(w);
        }

        sort(weights.begin(), weights.end());
        weights.erase(unique(weights.begin(), weights.end()), weights.end());

        ll answer = LLONG_MAX;
        int j = 0;

        for (int i = 0; i < (int)weights.size(); i++)
        {

            j = max(j, i);

            while (j < (int)weights.size() && !canConnect(n, weights[i], weights[j]))
            {
                j++;
            }
            if (j < (int)weights.size())
            {
                answer = min(answer, weights[i] + weights[j]);
            }
            else
            {

                break;
            }
        }

        cout << answer << "\n";
    }

    return 0;
}
