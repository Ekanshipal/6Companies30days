//Using BFS //searching for an open node (node that do not lead to any other node )
//other method using floyd cycle detection
bool isPossible(int N, vector<pair<int, int> >& prerequisites) {
	  
	  vector<int> adj[N];
	    for(auto& it: prerequisites) {
	        adj[it.first].push_back(it.second);
	    }
	    int cnt = 0;
	    vector<int> indeg(N, 0);
	    for(int i=0; i<N; i++) {
	        for(auto& it: adj[i]) {
	            indeg[it]++;
	        }
	    }
	    queue<int> q;
	    for(int i=0; i<N; i++) {
	        if(indeg[i]==0) q.push(i);
	    }
	    while(!q.empty()) {
	        int node = q.front();
	        q.pop();
	        cnt++;
	        for(auto& it: adj[node]) {
	            indeg[it]--;
	            if(indeg[it]==0) q.push(it);
	        }
	    }
	    return (cnt==N);
	    
	    
	 
	}
