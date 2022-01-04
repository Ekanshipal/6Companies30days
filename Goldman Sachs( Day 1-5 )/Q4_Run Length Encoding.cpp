string encode(string src)
{     
    string ans="";
    int count=1;
    int flag=0;
  for(int i=1;i<src.size();i++)
  {
     if(src[i]==src[i-1])
     {
     count++;
     flag=1;
     }
     else
     {
         ans+=src[i-1];
         ans+='0'+count;
         flag=0;
         count=1;
     }
  }
  if(flag==1||(flag==0&&count==1))
  {
      ans+=src[src.size()-1];
      ans+='0'+count;
  }
  return ans;
}     
 
