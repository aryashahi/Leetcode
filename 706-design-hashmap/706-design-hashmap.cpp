class MyHashMap {
public:
    vector<int>* hashmap;
    MyHashMap() {
        hashmap = new vector<int>(1e6+9,-1);
    }
    
    void put(int key, int value) {
        if(hashmap->size() < key)
            hashmap->resize(key+1,-1);
        (*hashmap)[key] = value;
    }
    
    int get(int key) {
        return (*hashmap)[key] ;
    }
    
    void remove(int key) {
        (*hashmap)[key]  = -1;
    }
};