#include <iostream>
#include <string>
#include <climits>
#include <unordered_map>
#include <vector>
#include <queue>
#include <map>
using namespace std;

class Graph {
    unordered_map<string, vector<pair<string, int>>> adj;
public:
    void addEdge(string u, string v, int w){
        adj[u].push_back({v,w});
        adj[v].push_back({u,w});
    }

    string dijkstra(string src, string dest){
        unordered_map<string,int> dist;
        unordered_map<string,string> parent;

        for(auto &x : adj) dist[x.first] = INT_MAX;

        priority_queue<pair<int,string>, vector<pair<int,string>>, greater<pair<int,string>>> pq;

        dist[src] = 0;
        pq.push({0, src});

        while(!pq.empty()){
            auto [cd, node] = pq.top();
            pq.pop();

            for(auto &edge: adj[node]){
                auto [nbr, w] = edge;
                if(dist[nbr] > cd + w){
                    dist[nbr] = cd + w;
                    parent[nbr] = node;
                    pq.push({dist[nbr], nbr});
                }
            }
        }

        if(dist[dest] == INT_MAX)
            return "No path found";

        string path = dest;
        string cur = dest;
        while(cur != src){
            cur = parent[cur];
            path = cur + " -> " + path;
        }

        return "Distance: " + to_string(dist[dest]) + "\nPath: " + path;
    }
};

int main(int argc, char* argv[]) {
    Graph g;
    g.addEdge("A","B",4);
    g.addEdge("A","C",2);
    g.addEdge("B","D",5);
    g.addEdge("C","D",1);

    if(argc < 3){
        cout << "Need SOURCE and DESTINATION";
        return 0;
    }

    string src = argv[1];
    string dest = argv[2];
    
    cout << g.dijkstra(src, dest);
    return 0;
}