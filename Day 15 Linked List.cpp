

      Node* insert(Node *head,int data)
      {
          //Complete this method
          Node* temp= head;
          Node* newnode=new Node(data);
          if(head==NULL)
          {
              head= newnode;
              return head;
          }
          while(temp->next!=NULL) temp=temp->next;
          temp->next= newnode;

          return head;
      }

