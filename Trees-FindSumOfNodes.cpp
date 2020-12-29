int sumOfNodes(TreeNode<int>*root){
 //initialise sum with the data present in the root
 int sum = root->data;
 
 //iterate over all children of the root
 //children is a vector which is attached to the root
 for(int i=0;i<root->children.size();i++){
   //using recursion to calculate the sum by passing every child as a root
   sum+=sumOfNodes(root->children[i]);
 }//for end
 return sum;
}//end sumOfNodes
