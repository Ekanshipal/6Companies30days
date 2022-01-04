int minSubArrayLen(int target, vector<int>& nums) {
     int sum=0;
       int left=0;
        int min_length=INT_MAX;
     
       for(int i=0;i<nums.size();i++)
       {
           if(nums[i]>=target)
               return 1;
           sum+=nums[i];
           while(sum>=target)
           {
               min_length=min(min_length,i+1-left);
               sum-=nums[left++];
           }
         
          
       }
        return(min_length!=INT_MAX)?min_length:0;
        
    }
