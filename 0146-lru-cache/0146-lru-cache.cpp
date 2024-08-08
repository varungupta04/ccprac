class LRUCache {
public:
    LRUCache(int capacity): capacity(capacity) {

    }

    int get(int key) {
        if(umap.count(key)){
            auto node = umap[key];

            if(node == head){
                return node->val.second;
            }else if(node == tail){
                tail->prev->next = nullptr;
                tail = node->prev;
                node->prev = nullptr;

            }else{
                node->prev->next = node->next;
                node->next->prev = node->prev;
            }

            node->next = head;
            head->prev = node;
            head = node;

            return node->val.second;
        }

        return -1;
    }

    void put(int key, int value) {
        if(umap.count(key)){
            umap[key]->val.second = value;
            get(key);
        }else{
            if(umap.size() == capacity){
                umap.erase(tail->val.first);
                if(capacity == 1){
                    head = nullptr;
                    tail = nullptr;
                }else{
                    tail->prev->next = nullptr;
                    tail = tail->prev;                  
                }
            }
            auto node = new Node(make_pair(key, value));

            if(head == nullptr){
                head = node;
                tail = node;
            }else{
                node->next = head;
                head->prev = node;
                head = node;
            }
            umap[key] = node;
        }
    }
private:
    class Node{
    public:
        pair<int, int> val;
        Node* prev = nullptr;
        Node* next = nullptr;
        explicit Node(const pair<int, int>& val) : val(val){}
    };
    unordered_map<int, Node*> umap;
    Node* head = nullptr;
    Node* tail = nullptr;
    int capacity;

};

/**
 * Your LRUCache object will be instantiated and called as such:
 * LRUCache* obj = new LRUCache(capacity);
 * int param_1 = obj->get(key);
 * obj->put(key,value);
 */