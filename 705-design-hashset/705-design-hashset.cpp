class MyHashSet {
public:
    vector<int>v;
    int size;
    MyHashSet() {
        size = 1e6+1; // (given it size 10^6 and +1 because vector will start from index 0)
        v.resize(size);
    }
    
    void add(int key) {
        v[key]=1;
    }
    
    void remove(int key) {
        v[key]=0;
    }
    
    bool contains(int key) {
        if(v[key]==1)
            return true;
        else
            return false;
    }
};

/**
 * Your MyHashSet object will be instantiated and called as such:
 * MyHashSet* obj = new MyHashSet();
 * obj->add(key);
 * obj->remove(key);
 * bool param_3 = obj->contains(key);
 */