class TrieNode{
    public:
    unordered_map<char,TrieNode*> children;
    bool isend;
    TrieNode(){
        isend=false;
    }
};
class PrefixTree {
    TrieNode* root;
public:
    PrefixTree() {
        root=new TrieNode();
    }
    
    void insert(string word) {
        TrieNode* node=root;
        for(auto c:word){
            if(!node->children.count(c)){
                node->children[c]=new TrieNode();
            }
            node=node->children[c];
        }
        node->isend=true;
        
    }
    
    bool search(string word) {
        TrieNode* node =root;
        for(auto c:word){
            if(!node->children.count(c)) return false;
            node=node->children[c];
        }
        return node->isend;
        
    }
    
    bool startsWith(string prefix) {
        TrieNode* node=root;
        for(auto c:prefix){
            if(!node->children.count(c)) return false;
            node=node->children[c];
        }
        return true;
    }
};
