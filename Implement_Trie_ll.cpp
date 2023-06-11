#include <bits/stdc++.h> 
class node{
    public:
    node* links[26];
    bool flag=false;
    int cntp=0, cnt=0;
};
class Trie{

    public:
    node* root;

    Trie(){
        // Write your code here.
        root=new node();
    }

    void insert(string &word){
        // Write your code here.
        node* n=root;
        for(int i=0; i<word.size(); i++){
            if(!n->links[word[i]-'a']){
                n->links[word[i]-'a']=new node();
            }
            n=n->links[word[i]-'a'];
            n->cntp++;
        }
        n->cnt++;
        n->flag=true;
    }

    int countWordsEqualTo(string &word){
        // Write your code here.
        node* n=root;
        for(int i=0; i<word.size(); i++){
            if(!n->links[word[i]-'a']){
                return 0;
            }
            n=n->links[word[i]-'a'];
        }
        return n->cnt;
    }

    int countWordsStartingWith(string &word){
        // Write your code here.
        node* n=root;
        for(int i=0; i<word.size(); i++){
            if(!n->links[word[i]-'a']){
                return 0;
            }
            n=n->links[word[i]-'a'];
        }
        return n->cntp;
    }

    void erase(string &word){
        // Write your code here.
        node* n=root;
        for(int i=0; i<word.size(); i++){
            if(!n->links[word[i]-'a']){
                return;
            }
            n=n->links[word[i]-'a'];
            n->cntp--;
        }
        n->cnt--;
    }
};
