class Solution {
public:
    bool canFinish(int numCourses, vector<vector<int>>& prerequisites) {
        int N = numCourses;
        
        std::vector<std::vector<int>> adj(N);
        std::queue<int> que;
        std::vector<int> indegree(N, 0);

        int count = 0;

        for(auto it : prerequisites){
            adj[it[0]].push_back(it[1]);
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
            return true;
        }
        else{
            return false;
        }

        


        
    }
};