//using BFS and queue

int orangesRotting(vector<vector<int>>& grid) {
        

        queue<pair<int,int>> q;
        int m=grid.size();
        int n=grid[0].size();
        int total=0;
        int ans=0;
        int time=0;
        vector<vector<int>>visited(m,vector<int>(n,0));
        for(int i=0;i<m;i++)
        {
            for(int j=0;j<n;j++)
            {
                if(grid[i][j]!=0)
                {
                    total++;
                if(grid[i][j]==2)
                {
                    q.push({i,j});
                    visited[i][j]=1;
                }
                }
                
            }
        }
        int dr[]={1,-1,0,0};
        int dc[]={0,0,1,-1};
        
        while(!q.empty())
        {
            int len=q.size();
            ans=ans+len;
          
           for(int i=0;i<len;i++)
            {
                int r=q.front().first;
                int c=q.front().second;
                q.pop();
                for(int j=0;j<4;j++)
                {
                    
                    int x=r+dr[j];
                    int y=c+dc[j];
                   
                    if(x < 0 || y < 0 || x>=m || y >= n || grid[x][y]!=1)
                    continue;
                    if(!visited[x][y])
                    {
                        q.push({x,y});
                        visited[x][y]=1;
                        grid[x][y]=2;
                    }
                    
                }
            }
            if(!q.empty())
                time++;
        }
        if(ans==total)
            return time;
        else 
            return -1;
        
    }
