class Node {
        public: 
        char c;
        bool isWord;
        Node *children[26] = {NULL};
        
        public:
        Node(char c){
            this->c = c;
            this->isWord = false;
        }
};

Node *root;

class Trie {
public:
    
    Trie() {
        root = new Node('\0');
    }
    
    void insert(string word) {
        Node *curr = root;
        for(int i=0; i<word.length(); i++){
            char c = word[i];
            if(curr->children[c-'a'] == NULL){
                curr->children[c-'a'] = new Node(c);
            }
            curr = curr->children[c-'a'];
        }
        
        curr->isWord = true;
    }
    
    bool search(string word) {
        Node *node = getNode(word);
        return node != NULL && node->isWord;
    }
    
    bool startsWith(string prefix) {
        Node *node = getNode(prefix);
        return node != NULL;
    }
    
    Node* getNode(string word){
        Node *curr = root;
        for(int i=0; i<word.size(); i++){
            char c = word[i];
            if(curr->children[c-'a'] == NULL){
                return NULL;
            }
            
            curr = curr->children[c-'a'];
        }
        
        return curr;
    }
};

/**
 * Trie object will be instantiated and called as such:
 * Trie* obj = new Trie();
 * obj->insert(word);
 * bool param_2 = obj->search(word);
 * bool param_3 = obj->startsWith(prefix);
 */