#include<queue>
void printLevelWise(TreeNode<int>* root){
  
  //handling the edge case of if the tree is empty
  if(root==NULL){
      return;
  }
  
  //create a queue
  queue <TreeNode<int>*> printLevel;
  //add the root first
  printLevel.push(root);
  
  //executing the code till the Queue is not empty 
  while(printLevel.size()!=0){
    //create a front node which will be used for printing
    TreeNode<int>* front = printLevel.front();
    //print the data
    cout<<front->data<<":";
    //pop the front element
    printLevel.pop();
    
    //looping on the children of the front node
    for(int i=0;i<root->children.size();i++){
       //first push the child into the queue in order
       printLevel.push(root->children[i]);
       
       //print all childrens of the root and ensure coomma doesn't get printed after last child
       if(root->children.size()-1!=i){
         cout<<root->children[i]->data<<",";
       }//if end
       else{
         cout<<root->children[i]->data;
       }//else end
    }//for end
    
    //update root to be the next element in the queue
    root = printLevel.front();
    cout<<endl;
  }//while end
}//printLevel end
