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
        Node *ptr = new Node();
        Node *ptr1 = new Node();
        ptr=head;
        if(index>size){
            return -1;
        }
        else{
            for(int i=0;i<index;i++)
            {
                ptr1=ptr->next;
                ptr=ptr->next;
        
            }
            cout<<ptr1->val;
        }
    }
    
    /** Add a node of value val before the first element of the linked list. After the insertion, the new node will be the first node of the linked list. */
    void addAtHead(int val) {
        
    }
    
    /** Append a node of value val to the last element of the linked list. */
    void addAtTail(int val) {
        
    }
    
    /** Add a node of value val before the index-th node in the linked list. If index equals to the length of linked list, the node will be appended to the end of linked list. If index is greater than the length, the node will not be inserted. */
    void addAtIndex(int index, int val) {
        
    }
    
    /** Delete the index-th node in the linked list, if the index is valid. */
    void deleteAtIndex(int index) {
        
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