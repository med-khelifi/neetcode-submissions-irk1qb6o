
class MyHashSet {
private:
    unordered_map<int, bool> hashSet;
public:
    MyHashSet() {
        
    }
    
    void add(int key) {
        hashSet[key] = true;    
    }
    
    void remove(int key) {
        hashSet.erase(key);
    }
    
    bool contains(int key) {
        return hashSet.find(key) != hashSet.end();
    }
};
