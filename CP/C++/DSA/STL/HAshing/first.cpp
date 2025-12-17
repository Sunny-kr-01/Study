#include <bits/stdc++.h>
using namespace std;

class hashing{
    vector<list<int>> HashTable;                    //list<int> : linkedList
    int buckets;
public:
    hashing(int val){
        this->buckets=val;
        HashTable.resize(val);
    }
    int hash_value(int key){
        return key%buckets;
    }
    void insert(int key){
        int idx=hash_value(key);
        HashTable[idx].push_back(key);
    }
    list<int>::iterator search(int key){
        int idx=hash_value(key);
        return find(HashTable[idx].begin(),HashTable[idx].end(),key);
    }
    void delete_key(int key){
        int idx=hash_value(key);
        if(search(key)!=HashTable[idx].end()){
            HashTable[idx].erase(search(key));
            cout<<"Deleted\n";
        }
        else cout<<"NOt present\n";
    }

};

int main(){
    hashing h(10);
    h.insert(1);
    h.insert(2);
    h.insert(3);
    h.insert(4);

    h.delete_key(3);
    h.delete_key(3);

    return 0;
}