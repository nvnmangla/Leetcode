/*
If a node contains data member that acts as a pointer to another node, then many
nodes can be strung together to make linked list
*/

// Singly linked list

class Node{
    public:
        Node(){
            next = 0;
        }
        Node(int i,Node* in=0){
                info=i;next = in;
        }
        int info;
        Node *next;
};