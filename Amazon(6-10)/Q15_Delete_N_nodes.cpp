void linkdelete(struct Node  *head, int M, int N)
    {
          int i=0;
          int flag=0;
          if(!head)
          return;
           struct Node*previous=NULL; 
          struct Node*temp=head;
          while(temp)
          {
            if(flag==M)
            {
                i=0;
                while(i<N&&temp&&previous)
                {
                    Node*temp2=temp;
                    previous->next=temp->next;
                    temp=previous->next;
                    delete temp2;
                    i++;
                }
                
                flag=0;
            }
            else
            {
                flag++;
                  previous=temp;
            temp=temp->next;
            }
            if(!temp)
            {
                return ;
            }
          }
          
    }
