class TrieNode{
    public:
    unordered_map<char,TrieNode*> children;
    bool isend;
    TrieNode(){
        isend=false;
    }
};
class WordDictionary {
    TrieNode* root;
public:
    WordDictionary() {
        root=new TrieNode();
    }
    
    void addWord(string word) {
        TrieNode* node=root;
        for(auto c:word){
            if(!node->children.count(c)){
                node->children[c]=new TrieNode();
            }
            node=node->children[c];
        }
        node->isend=true;
    }
    bool searchWord(string word,TrieNode* trie){
         TrieNode* node=trie;
         for(int i=0;i<word.length();i++){
            char c=word[i];
            if(c=='.'){
                for(auto c:node->children){
                    if(searchWord(word.substr(i+1),c.second)){
                        return true;
                    }
                }
                return false;
                
            }
            else if(!node->children.count(c)) return false;
            node=node->children[c];
         }
         return node->isend;

    }
    bool search(string word) {
        return searchWord(word,root);
    }
};
