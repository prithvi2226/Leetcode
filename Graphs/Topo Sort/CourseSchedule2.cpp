class Solution {
public:
    vector<int> findOrder(int numCourses, vector<vector<int>>& prerequisites) {
        int N = numCourses;
        int count = 0;

        std::vector<std::vector<int>> adj(N);
        std::vector<int> indegree(N, 0);
        std::queue<int> que;
        std::vector<int> topo;

        for(auto it : prerequisites){
            adj[it[1]].push_back(it[0]);
        }

        for(int i = 0; i < N; i ++){
            for(auto it : adj[i]){
                indegree[it] ++;
            }
        }

        for(int i = 0; i < N; i++){
            if(indegree[i] == 0){
                que.push(i);
            }
        }


        while(!que.empty()){
            
            int node = que.front();
            topo.push_back(node);

            que.pop();

            for(auto it : adj[node]){
                indegree[it] --;

                if(indegree[it] == 0){
                    que.push(it);
                }
            }
            count ++;
        }

        if(count == N){
            return topo;
        }
        else{
            return {};
        }


    }
};