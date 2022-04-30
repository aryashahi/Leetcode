class Solution {
public:
//    Directed graph of strings 
    unordered_map<string, vector<pair<string, double>>> graph;
    
    double bfs(string &st, string &ed)
    {
        unordered_set<string> visited;
        queue<pair<string, double>> q;
        
        visited.insert(st);
        q.push({st, 1});
        
        while(!q.empty())
        {
            auto p = q.front();
            q.pop();
            
            if(p.first == ed)   return p.second;
            
            for(auto i : graph[p.first])
            {
                if(!visited.count(i.first))
                {
                    visited.insert(i.first);
                    q.push({i.first, i.second * p.second});  
                }
            }
        }
        return -1;
    }
    
    vector<double> calcEquation(vector<vector<string>>& equations, vector<double>& values, vector<vector<string>>& queries) {
    
        int i, n = equations.size();
        
//         build graph using equations and values
        for(i=0;i<n;i++)
        {
            string a = equations[i][0], b = equations[i][1];
            double val = values[i];
            
            graph[a].push_back({b, val});
            graph[b].push_back({a, double(1/val)});
        }
        
        vector<double> answer;
        
        for(auto q : queries)
        {
            string a = q[0], b = q[1];
//             if string a or string b is not present --> answer is -1
            if(!graph.count(a) || !graph.count(b))
            {
                answer.emplace_back(double(-1));
                continue;
            }
            answer.emplace_back(bfs(a,b));
            
        }
        return answer;
    }
};