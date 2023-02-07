#include<iostream>
#include<memory>
using namespace std;
/*
If a node contains data member that acts as a pointer to another node, then many
nodes can be strung together to make linked list
*/

/* Singly linked list
if a node has link only to its successor
*/

/**
 * @brief Class to create node
 * 
 */
class Node{
    public:
        Node(){
            next = 0;
        }
        Node(int i){
                info = i; 
                next = nullptr;

        }
        int info;
        
        std::shared_ptr<Node>next;
};

/**
 * @brief This is to manage linked list
 * 
 */
class Node_list{
    
    public:
        Node_list(){
            head = nullptr;
            tail = nullptr;
        };

        /**
         * @brief Adding a pointer to head
         * 
         */
        void add_to_head(std::shared_ptr<Node>p){
          if (head){
                auto tmp = p;  // make a temporary ptr
                head = tmp->next; 
                tmp.reset();
          }
          else{
            head  = p;
            tail = p->next;

            p.reset();
            }
        }

        std::shared_ptr<Node> head;
        std::shared_ptr<Node> tail;
        
};