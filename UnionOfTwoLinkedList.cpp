Given two linked lists, your task is to complete the function makeUnion(), that returns the union list of two linked lists. This union list should include all the distinct elements only and it should be sorted in ascending order.

Example 1:

Input:
L1 = 9->6->4->2->3->8
L2 = 1->2->8->6->2
Output: 
1 2 3 4 6 8 9
Explaination: 
All the distinct numbers from two lists, when sorted forms the list in the output. 

  #code-

  class Solution
{
    public:
    struct Node* makeUnion(struct Node* head1, struct Node* head2)
    {
        // code here
        set<int>st;
        while(head1){
            st.insert(head1->data);
            head1=head1->next;
        }
        while(head2){
            st.insert(head2->data);
            head2=head2->next;
        }
        Node *list=new Node(0);
        Node *h=list;
        for(auto i:st){
            list->next=new Node(i);
            list=list->next;
        }
        return h->next;
    }
};
