


	ull getNthUglyNo(int n) {
	    vector<ull> res(n);
	   int l1=0,l2=0,l3=0;
	    ull ans1,ans2,ans3;
	    res[0]=1;
	    ull temp;
	    
	    for(int i=1;i<n;i++)
	    {
	        ans1=2*res[l1];
	        ans2=3*res[l2];
	        ans3=5*res[l3];
	        temp=min(ans1,min(ans2,ans3));
	        if(temp==ans1)
	        l1++;
	        if(temp==ans2)
	        l2++;
	        if(temp==ans3)
	        l3++;
	        res[i]=temp;
	    }
	    return res[n-1];
	}
