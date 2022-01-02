
//Q1 Print Anagram Together

vector<vector<string> > Anagrams(vector<string>& string_list) {
        unordered_map<string,vector<string>> umap;
        vector<vector<string>> res;
        int s=string_list.size();
        for(int i=0;i<s;i++)
        {
            string word=string_list[i];
            string temp=string_list[i];
            sort(temp.begin(),temp.end());
            umap[temp].push_back(word);

        }
        for( auto it:umap)
        {
          res.push_back(it.second);
        }
        return res;
    }
