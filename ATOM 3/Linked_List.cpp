class MyLinkedList {
private:
    struct Node {
        int val;
        Node *next;
        Node(int x):val(x),next(NULL){}
    };
    Node *head;
    int size;
    /** Initialize your data structure here. */
public:
    MyLinkedList() {
        head=NULL;
        size=0;
    }
    
    /** Get the value of the index-th node in the linked list. If the index is invalid, return -1. */
    int get(int index) {
        Node *ptr = head;
        Node *ptr1 = new Node();
        //ptr=head;
        if(index>size){
            return -1;
        }
        else{
            while(i<=index){       
                //ptr1=ptr->next;
                ptr=ptr->next;
        
            }
            return ptr1->val;
        }
    }
    
    /** Add a node of value val before the first element of the linked list. After the insertion, the new node will be the first node of the linked list. */
    void addAtHead(int val) {
        // creating a new node
        Node *new_node = new Node(val);
        
        new_node->next=head;
        head=new_node;
        size++;
        
    }
    
    /** Append a node of value val to the last element of the linked list. */
    void addAtTail(int val) {
        Node *curr = head;
        // checking if curr is NULL and curr->next is NULL
        while(curr && curr->next!= NULL){
            curr = curr->next;
        }
        Node *new_node= new Node(val);
        curr->next = new_node;
        new_node->next=NULL;
        size++;
        
        
    }
    
    /** Add a node of value val before the index-th node in the linked list. If index equals to the length of linked list, the node will be appended to the end of linked list. If index is greater than the length, the node will not be inserted. */
    void addAtIndex(int index, int val) {
        if(index>size){
            return ;
        }
        
        Node *curr=head;
        int i=0;
        while(i<index-1){
            curr=curr->next;
            i++;
        }
        
        Node *new_node = new Node(val);
        new_node->next=curr->next;
        curr->next=new_node;
        size++;
        return ;
    }
    
    /** Delete the index-th node in the linked list, if the index is valid. */
    void deleteAtIndex(int index) {
           if(index>size){
            return ;
        }
        
        Node *curr=head;
        int i=0;
        while(i<index-1){
            curr=curr->next;
            i++;
        }
        
        //Node *new_node = new Node(val);
        //new_node->next=curr->next;
        curr->next=curr->next->next;
        size--;
        return ;
    }
};

/**
 * Your MyLinkedList object will be instantiated and called as such:
 * MyLinkedList obj = new MyLinkedList();
 * int param_1 = obj.get(index);
 * obj.addAtHead(val);
 * obj.addAtTail(val);
 * obj.addAtIndex(index,val);
 * obj.deleteAtIndex(index);
 */