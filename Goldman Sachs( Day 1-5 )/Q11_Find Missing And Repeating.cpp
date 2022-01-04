int *findTwoElement(int *arr, int n) {
     int*ans=new int[2];

     sort(arr,arr+n);
     int x=1;
     for(int i=0;i<n;i++)
     {
         if(arr[i]!=x&&ans[1]==0)
         {
             ans[1]=x;
         }
         if(arr[i]==arr[i+1])
         {
             ans[0]=arr[i];
             i++;
         }
         if(ans[0]!=0&&ans[1]!=0)
         {
             return ans;
         }
         x++;
     }
     if(ans[1]==0)
     {
         ans[1]=n;
     }
        return ans;
        
    }
