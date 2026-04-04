class MyHashMap {
private:
    unordered_map<int, int> mp;

public:
    MyHashMap() {}

    void put(int key, int value) {
        mp[key] = value;
    }

    int get(int key) {
        if (mp.find(key) == mp.end())
            return -1;
        return mp[key];
    }

    void remove(int key) {
        mp.erase(key);
    }
};