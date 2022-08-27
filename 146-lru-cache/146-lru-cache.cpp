class LRUCache {
public:
    class node{
        public:
            int key,val;
            node* next,*prev;
            node(int _key, int _val){
                key = _key;
                val = _val;
            }
    };
    
    node* head = new node(-1,-1);
    node* tail = new node(-1,-1);
    
    int cap;
    unordered_map<int,node*> mp;
    
    void del(node* x){
        node* p = x->prev;
        node* n = x->next;
        p->next = n;
        n->prev = p;
        delete x;
    }
    
    LRUCache(int capacity) {
        cap = capacity;
        head->next = tail;
        tail->prev = head;
    }
    
    int get(int key) {
        if(mp.find(key)!=mp.end()){
            int value = mp[key]->val;
            del(mp[key]);
            mp.erase(key);
            
            node* temp = head->next;
            node* t2 = new node(key,value);
            
            head->next = t2;
            t2->prev = head;
            t2->next = temp;
            temp->prev = t2;
            mp[key] = t2;
            
            return value;
        }
        
        return -1;
    }
    
    void put(int key, int value) {
        if(mp.find(key) != mp.end()){
            del(mp[key]);
            mp.erase(key);
        }
        
        node* temp = head->next;
        node* t2 = new node(key,value);
        head->next = t2;
        t2->prev = head;
        t2->next = temp;
        temp->prev = t2;
        mp[key] = t2;
        
        if(mp.size()>cap){
            mp.erase(tail->prev->key);
            del(tail->prev);
        }
    }
};
/**
 * Your LRUCache object will be instantiated and called as such:
 * LRUCache* obj = new LRUCache(capacity);
 * int param_1 = obj->get(key);
 * obj->put(key,value);
 */