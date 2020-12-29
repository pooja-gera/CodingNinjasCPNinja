int count = 0; //declaring count globally so that it can be incremented without worrying about its memory getting destroyed after the scope of the function gets destroyed
int getLeafNodeCount(TreeNode<int>* root){
  //creating edge case
  if(root==NULL)
     return 0;
  
  //case where there are no children of the root, which makes the node a leaf;
  else if(root->children.size()==0){
     count++;
  }
  
  //iterating over the root
  for(int i=0;i<root->children.size();i++){
    getLeafNodeCount(root->children[i]);
  }
  
  return count;
  
  
}//end getLeafNodeCount
