void diagonalPrint(Node* root, int vertical_distance, map<int, vector<int>> &diagonal_map)
{
    if (root==NULL)
        return;
 
    diagonal_map[vertical_distance].push_back(root->data);
    
    diagonalPrint(root->left,vertical_distance+1,diagonal_map);
 
    diagonalPrint(root->right,vertical_distance,diagonal_map);
}



vector<int> diagonal(Node *root)
{
    vector<int> v;
    map<int, vector<int> > diagonal_map;
	int vertical_distance=0;
    diagonalPrint(root, vertical_distance, diagonal_map);
 
    for (auto itr:diagonal_map)
    {
        for(auto itr1:itr.second)
          v.push_back(itr1);
    }
    
    return v;
}