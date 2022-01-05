int countSubArrayProductLessThanK(const vector<int>& a, int n, long long k) {
        int count=0;
        long long product=1;
        int j=0;
        product=1;
        
        // 1 2 3 4= 
        for(int i=0;i<n;i++)
        {
                product*=a[i];
                if(product>=k)
                {
                    while(product>=k&&j<=i)
                    {
                        product=product/a[j];
                        j++;
                    }
                }
               count=count+i-j+1;
        
        
            
        }
        return count;
        
    }
