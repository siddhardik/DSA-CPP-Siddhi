 
#include<iostream>
#include<queue>

using namespace std;
 

 struct Node {
    int data;
    Node *left;
    Node *right;

    Node(int val) {
        data = val;
        left = right = NULL;
    }
 };
 
 
 int countNodes(struct Node* tree){
        if(tree==NULL){
            return 0;
        }
        int ans=1+countNodes(tree->left)+countNodes(tree->right);
        
        return ans;
    }
    
    bool isMaxHeap(struct Node* tree){
        if(tree==NULL){
            return true;
        }
        
        else if(tree->left==NULL && tree->right==NULL){
            return true;
        }
        
        //Right NUll , Left Should be NULL
        else if(tree->right==NULL){
            return tree->data>tree->left->data;
        }
        else{
            //trre and left or right are not null
            bool leftOk=tree->data > tree->left->data  && isMaxHeap(tree->left);
            bool rightOk=tree->data > tree->right->data && isMaxHeap(tree->right);
            //Recursive Call For left and right
            
            return (leftOk && rightOk);
        }
    }
    
    bool isCBT(struct Node* tree, int index,int noOfNodes){
        if(tree==NULL){
            return true;
        }
        
         //Followed 0 based indexing
        int leftIndex=2*index+1;
        int rightIndex=2*index+2;
        
       if(index>=noOfNodes){
           return false;
       }
       else{
           bool left=isCBT(tree->left,leftIndex,noOfNodes);
           bool right=isCBT(tree->right,rightIndex,noOfNodes);
           return (left && right);
       }
    }
         
         
    
    bool isHeap(struct Node* tree){
        if(tree==NULL){
            return true;
        }
        
        int noOfNodes=countNodes(tree);
        int index=0;
        if(!isCBT(tree,index,noOfNodes)){
            return false;
        }
        else if(!isMaxHeap(tree)){
            return false;
        }
        else{
            return true;
        }
    }