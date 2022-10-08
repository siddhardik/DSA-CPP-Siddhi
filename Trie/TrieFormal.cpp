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
      //Base Case 
        if(word.length()==0){
            root->isTerminal=true;
            return;
        }
        int index=word[0]-'A';
        TrieNode* child;
    
       //Present
        if(root->childrens[index]!=NULL){
            child=root->childrens[index];
          }
        else{
        // Absent
        child=new TrieNode(word[0]);
        root->childrens[index] = child;
        }
    //Recursive Call 
    insertUtil(child,word.substr(1));
  }
    void insertWord(string word){
        transform(word.begin(),word.end(),word.begin(),::toupper);
        insertUtil(root,word);
    }

    // Let's Write Search Function

    bool searchUtil(TrieNode* root, string word){
        int index=word[0]-'A';
        TrieNode* child;
        child=root->childrens[index];
        if(child==NULL){
             return false;
        }
        //Base Case
        if(word.length()==1){
            return  child->isTerminal;
        }
        //Recursion 
        return searchUtil(child,word.substr(1));
    }

    bool searchWord(string word){
         transform(word.begin(),word.end(),word.begin(),::toupper);
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
    
    cout<<"Searching For the word "<<t->searchWord("Hardk")<<endl;
    return  0;
}