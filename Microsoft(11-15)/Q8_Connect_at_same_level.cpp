
//BFS
//Another good approach is just traversal using previously set rightNext pointer
void connect(Node *root)
    {
        queue<Node*>q;
        q.push(root);
        while(!q.empty())
        {
            int len=q.size();
            for(int i=0;i<len;i++)
            {
                Node* temp=q.front();
                q.pop();
                if(i==len-1)
                temp->nextRight=NULL;
                else
                temp->nextRight=q.front();
                if(temp->left)
                q.push(temp->left);
                if(temp->right)
                q.push(temp->right);
            }
        }
       
    } 
