// 23 Dec 2023

// Code to Detect a loop in a linked list
 bool detectLoop(Node* head)
    {
        // your code here
        Node* fast = head;
        Node* slow = head;
        bool hasLoop = false;
        
        while (fast!= nullptr && fast->next != nullptr){
            slow = slow->next;
            fast = fast->next->next;
            if (fast == slow){
                hasLoop = true;
                break;
            }
        }
        
    
        return hasLoop;
    }
};
