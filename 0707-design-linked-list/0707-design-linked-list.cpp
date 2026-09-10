class MyLinkedList {
private:
    struct Node {
        int val;
        Node* next;
        Node(int v) : val(v), next(nullptr) {}
    };
    
    Node* dummy;
    int size;

public:
    MyLinkedList() {
        dummy = new Node(0);
        size = 0;
    }
    
    int get(int index) {
        if (index < 0 || index >= size) return -1;
        Node* curr = dummy->next;
        for (int i = 0; i < index; ++i) curr = curr->next;
        return curr->val;
    }
    
    void addAtHead(int val) {
        Node* newNode = new Node(val);
        newNode->next = dummy->next;
        dummy->next = newNode;
        size++;
    }
    
    void addAtTail(int val) {
        Node* newNode = new Node(val);
        Node* curr = dummy;
        while (curr->next != nullptr) curr = curr->next;
        curr->next = newNode;
        size++;
    }
    
    void addAtIndex(int index, int val) {
        if (index > size) return;
        if (index < 0) index = 0;
        Node* newNode = new Node(val);
        Node* curr = dummy;
        for (int i = 0; i < index; ++i) curr = curr->next;
        newNode->next = curr->next;
        curr->next = newNode;
        size++;
    }
    
    void deleteAtIndex(int index) {
        if (index < 0 || index >= size) return;
        Node* curr = dummy;
        for (int i = 0; i < index; ++i) curr = curr->next;
        Node* toDelete = curr->next;
        curr->next = curr->next->next;
        delete toDelete;
        size--;
    }
    
    ~MyLinkedList() {
        Node* curr = dummy;
        while (curr != nullptr) {
            Node* next = curr->next;
            delete curr;
            curr = next;
        }
    }
};
