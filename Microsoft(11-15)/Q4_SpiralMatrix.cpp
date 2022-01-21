   vector<int> spirallyTraverse(vector<vector<int> > matrix, int r, int c) 
    {
        vector<int> v;
        int direction=1;
        int left=0,right=c-1,up=0,down=r-1;
    while(left<=right and up<=down)
    {
    if(direction==1)
    {
    for(int i=left;i<=right;i++)
    {
        v.push_back(matrix[up][i]);
        direction=2;
    }
     up++;
    }
    else if(direction==2)
    {
    for(int i=up;i<=down;i++)
    {
        v.push_back(matrix[i][right]);
        direction=3;
    }
    right--;
    }
    else if(direction==3)
    {
    for(int i=right;i>=left;i--)
    {
        v.push_back(matrix[down][i]);
        direction=4;
    }
    down--;
    }
    else if(direction==4)
    {
    for(int i=down;i>=up;i--)
    {
        v.push_back(matrix[i][left]);
        direction=1;
    }
      left++;
    }
            
            
    }
        return v;

    }
