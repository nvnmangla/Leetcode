#include <utils.hpp>

int main(){
    // Making a node
     
    std::shared_ptr<Node>p =  std::make_shared<Node>(10);  // Smart Pointer method (preffered)

    {
        // Raw pointer method
        Node *p_ = new Node(10);
        delete p_;

    }

    
    //--------------------------------------------------
    // We denote , Head to first node and tail to last node
    //--------------------------------------------------

    // Let us we have list object 

    Node_list nodes; 

    
    /**
     * Operations
     * -- Insertion 
     *    -- in the beginning 
     *        -- Make new node say n 
     *        -- n->next = head
     *        -- head = *n
     * 
     */

    nodes.add_to_head(p); // adding ptr to head
    cout<<"\n"<<nodes.head->info;

    // Adding node

    nodes.add_to_tail(std::make_shared<Node>(20));
    nodes.add_to_tail(std::make_shared<Node>(10));
    nodes.add_to_tail(std::make_shared<Node>(5));


    /**
     * @brief Deleting node 
     * -------------------------------
     * Deleting from head 
     *          deleting head and returning value stored in it 
     * 
     */

    auto val = nodes.pop_head();
    cout<<" -- Deleted node info "<<val<<endl;

    
    
    cout<<" -- Deleted node info "<<nodes.pop_tail()<<endl;
    cout<<" -- Deleted node info "<<nodes.pop_tail()<<endl;




    return 0;
}