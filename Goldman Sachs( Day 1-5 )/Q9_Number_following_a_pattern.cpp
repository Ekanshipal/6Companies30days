 string printMinNumberForPattern(string S){
    
        int curr_max = 0; 
        int last_entry = 0; 
      
        int j; 
        string ans="";
        for (int i=0; i<S.length(); i++) 
        {  
            int noOfNextD = 0; 
      
            switch(S[i]) 
            { 
            case 'I': 
               
                j = i+1; 
                while (S[j] == 'D' && j < S.length()) 
                { 
                    noOfNextD++; 
                    j++; 
                } 
                    
                if (i==0) 
                { 
                    curr_max = noOfNextD + 2; 
       
                    ++last_entry;
                    ans+=('0'+last_entry);
                    ans+=('0'+curr_max);

                    // Set max digit reached 
                    last_entry = curr_max; 
                } 
                else
                { 
                    curr_max = curr_max + noOfNextD + 1; 
      
                    last_entry = curr_max; 
                    ans+=('0'+last_entry);
                } 
      
                
                for (int k=0; k<noOfNextD; k++) 
                {   
                    --last_entry;
                    ans+=('0'+last_entry);
                    i++; 
                } 
                break; 
      
            // If letter is 'D' 
            case 'D': 
                if (i == 0) 
                { 
           
                    j = i+1; 
                    while (S[j] == 'D' && j < S.length()) 
                    { 
                        noOfNextD++; 
                        j++; 
                    } 
      
                    
                    curr_max = noOfNextD + 2; 
      
                   
                    ans+=('0'+curr_max);
                    ans+=('0'+(curr_max - 1));

      
                    last_entry = curr_max - 1; 
                } 
                else
                { 
                
                    ans+=('0'+(last_entry - 1));
                  
                    last_entry--; 
                } 
                break; 
            } 
        } 
        return ans;
        
        
    }
