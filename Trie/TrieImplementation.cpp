#include<bits/stdc++.h>
using namespace std;

class TrieNode{
    public:
    char data;
    bool isTerminal;
    TrieNode* childrens[26];

    TrieNode(char data){ 
       this->data=data;

        //Initialize All Posibble Childs node as NULL

        //We have 26 Character for dictionary
        for(int i=0;i<26;i++){
            childrens[i]=NULL;
        }
        //Initialize This node As not terminal node
        isTerminal=false;

    }

};


class Trie{
    public:
    TrieNode* root;

    Trie(){
        root=new TrieNode('\0');
    }

    void insertUtil(TrieNode* root,string word){
        cout<<word<<endl;
        //Base Case 
        if(word.length()==0){
            root->isTerminal=true;
            cout<<"Reached in Base Case"<<endl;
            return;
        }
        cout<<"I am Calling"<<endl;

        int index=word[0]-'A';
        TrieNode* child;

        //Present
        if(root->childrens[index]!=NULL){
            child=root->childrens[index];
            cout<<endl<<word[0]<<" is Already Present"<<endl;
          }
        else{
        // Absent
        child=new TrieNode(word[0]);
        root->childrens[index] = child;
        cout<<child->data<<" Char Insert Successfully "<<endl;
        }
    //Recursive Call 
    cout<<endl<<endl;
    insertUtil(child,word.substr(1));
  }
    void insertWord(string word){
        // Convert Word into UpperCase
        transform(word.begin(),word.end(),word.begin(),::toupper);
        // cout<<word<<endl;
        insertUtil(root,word);
    }

    // Let's Write Search Function

    bool searchUtil(TrieNode* root, string word){
        cout<<word<<endl;
        int index=word[0]-'A';
        cout<<"Index Of Letter "<<word[0]<<" = " <<index<<endl;
        TrieNode* child;
      
       child=root->childrens[index];
        if(child!=NULL){
             cout<<child<<endl;
             cout<<child->data<<endl;
          }
        else{
            // cout<<root<<endl;
            // cout<<root->data<<endl;
            // cout<<"I Am False"<<endl;
             return false;
        }
        //Base Case
        if(word.length()==1){
            return  child->isTerminal;
        }
        
        cout<<endl;
        cout<<endl;
       
        //Recursion 
        return searchUtil(child,word.substr(1));
    }

    bool searchWord(string word){
        // Convert Word into UpperCase
         transform(word.begin(),word.end(),word.begin(),::toupper);
        //  cout<<word<<endl;
        return searchUtil(root,word);
    }
};


int main(){

    Trie *t=new Trie();
    t->insertWord("ssidd");
    cout<<endl;
    t->insertWord("Har");
    cout<<endl;
    t->insertWord("Hardik");
    
    cout<<"All Insertion Complete"<<endl;
    
    cout<<"Searching For the word "<<t->searchWord("Hardik")<<endl;

    return  0;
}