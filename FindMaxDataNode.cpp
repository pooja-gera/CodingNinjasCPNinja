//node has to be returned, and hence, function type would be of node of the Tree type
TreeNode<int>* maxDataNode(TreeNode<int>* root){
  //create a new node and initialise as the root
  TreeNode<int>* maxData = root;
 
  //iterating over the children of the root
  for(int i=0;i<root->children.size();i++){
    //creating a small node and assigning it to the max data node retrieved by passing the child to the function
    TreeNode<int>* small = maxDataNode(root->children[i]);
    
    //check if the data in the max node is smaller than the data in the small node
    if(maxData->data < small->data){
      maxData=small;
    }//end if
    
  }//end for
  
  //return the node 
  return maxData;
}//end maxDataNode
