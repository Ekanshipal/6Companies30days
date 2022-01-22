 void word(int a[],int N,string str,int i,unordered_map<int,string>umap,vector<string>&v)
    {
    
        
      if(i>=N)
      {
          v.push_back(str);
          return;
      }
      string temp=umap[a[i]];
      
      for(int j=0;j<temp.size();j++)
      {
          word(a,N,str+temp[j],i+1,umap,v);
      }
      return;
        
    }
    
    vector<string> possibleWords(int a[], int N)
    {
        vector<string>ans;
        
        unordered_map<int,string>umap;
        umap[2]="abc";
        umap[3]="def";
        umap[4]="ghi";
        umap[5]="jkl";
        umap[6]="mno";
        umap[7]="pqrs";
        umap[8]="tuv";
        umap[9]="wxyz";
        word(a,N,"",0,umap,ans);
        return ans;
        
    }
