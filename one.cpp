vector<int> diagonal(Node *root)
{
    vector<int>v;
    queue<Node *> q;
    q.push(root);
    while(!q.empty())
    {
        Node *t=q.front();
         q.pop();
        while(t)
        {
            v.push_back(t->data);
            if(t->left)
                q.push(t->left);
            t=t->right;
        }
    }
    return v;
}
