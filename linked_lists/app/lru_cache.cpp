
#include<iostream>
#include<memory>
#include<cassert>
#include<vector>

#include<vector>
#include<map>

using std::vector;
using std::map;
using std::cout;

class Node{
    public:
        Node(int key_, int value_){
            key = key_;
            value = value_;
        }
        
        Node(){key = 0;value =0;};

        int key;
        int value;
        Node* next = nullptr;
        Node* prev = nullptr;
};


class LRUCache {

    public:
        /**
         * @brief Construct a new LRUCache object
         * 
         * @param capacity  //capacity of the LRUCache
         */
        LRUCache(int capacity) {

            cap = capacity;
            cache = {}; // map the key to node 
            left->next = right;  
            right->prev = left; 

        }

    void remove(Node* node){
       Node* prev = node->prev;
       Node* next = node->next;
       prev->next = next;
       next->prev = prev;
    }

    void insert(Node* node){
        Node* prev = right->prev;
        prev->next = node;
        right->prev = node;
        node->prev = prev;
        node->next = right;

    }
    
    int get(int key) {

      if(cache.find(key) != cache.end()) {  
            remove(cache[key]);
            insert(cache[key]);
            return cache[key]->value;

      } else return -1;  
        
    }
    
    void put(int key, int value) {
        if  (cache.find(key) != cache.end()) {
            remove(cache[key]);
            cache.erase(key);    
        }

        if(cache.size() == cap){
            cache.erase(left->next->key);

            remove(left->next);
        }

        Node* node_ptr = new Node(key,value);
        cache[key] = node_ptr;
        insert(cache[key]);


    }

    int cap;
    map<int,Node*>cache;
    Node *left = new Node();  // least recently used node
    Node *right = new Node(); // most recently used node


};

int main(){

    LRUCache my_cache(2);
    my_cache.put(1,1);
    my_cache.put(2,2);
    my_cache.get(1);

    my_cache.put(3,3);
    my_cache.get(2);

    my_cache.put(4,4);
    my_cache.get(1);
    my_cache.get(3);
    my_cache.get(4);
    
    return 0;


}