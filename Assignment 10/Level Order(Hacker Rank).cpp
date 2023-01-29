//Hacker rank Level order
  void levelOrder(Node * root) {
          queue<Node*>q;
          int n;
          cin>>n;
       // vector<int>ans;
        if(root==NULL)
        {
            return;
        }
        q.push(root);
        int temp;
        while(!q.empty()){
           // int temp;
           Node* temp=q.front();
           q.pop();
           if(temp->left){
               q.push(temp->left);
              // q.pop();
           }
           if(temp->right)
           {
               q.push(temp->right);
           }
           cout<<(temp->data)<<" " ;
           }
        }
