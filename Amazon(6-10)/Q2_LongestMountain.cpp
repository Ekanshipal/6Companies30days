  
//using two pointers approach

int longestMountain(vector<int>& arr) { 
        int j=0;
        int ans=0;
        int n=arr.size();
        while(j<n)
        {
            int i=j;
            if((i+1)<n&&arr[i+1]>arr[i])
            {
                while((i+1)<n&&arr[i+1]>arr[i])
                    i++;
                if((i+1)<n&&arr[i]>arr[i+1])
                {
                    while((i+1)<n&&arr[i]>arr[i+1])
                        i++;
                    ans=max(ans,i-j+1);
                }
            }
                
            j=max(j+1,i);
        }
        return ans;
    }
