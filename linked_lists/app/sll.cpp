#include <utils.hpp>

int main(){
    // Making a node
     
    std::shared_ptr<Node>p =  std::make_shared<Node>(10);  // Smart Pointer method (preffered)
    cout<<"Info "<<p->info;


    {
        // Raw pointer method
        Node *p_ = new Node(10);
        cout<<"Info "<<p_->info;
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


    return 0;
}