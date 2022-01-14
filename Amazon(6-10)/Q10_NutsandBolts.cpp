//using hashing
//also can be done using sorting simple sort function


void matchPairs(char nuts[], char bolts[], int n) {
	    unordered_map<char,int> umap;
	   unordered_map<char,int> umap2;
	    string s="!#$%&*@^~";
	    for(int i=0;i<n;i++)
	    {
	        umap[nuts[i]]++;
	        umap2[bolts[i]]++;
	        
	    }
	    int j=0;
	    for(int i=0;i<9;i++)
	    {
	       while(umap[s[i]])
	       {
	           nuts[j++]=s[i];
	           umap[s[i]]--;
	       }
	    }
	    int k=0;
	     for(int i=0;i<9;i++)
	    {
	       while(umap2[s[i]])
	       {
	           bolts[k++]=s[i];
	           umap2[s[i]]--;
	       }
	    }
	    
	    
	}
