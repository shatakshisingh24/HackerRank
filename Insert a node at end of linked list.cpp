

// Complete the insertNodeAtTail function below.

/*
 * For your reference:
 *
 * SinglyLinkedListNode {
 *     int data;
 *     SinglyLinkedListNode* next;
 * };
 *
 */
SinglyLinkedListNode* insertNodeAtTail(SinglyLinkedListNode* head, int data)
{
    SinglyLinkedListNode *new_node,*ptr;
   new_node=(SinglyLinkedListNode*) malloc(sizeof(*head));
   new_node->data=data;

   if(head==NULL)
   {
       head=new_node;
       return head;
   }
   else
    { ptr=head;
    while(ptr->next != NULL)
    { ptr=ptr->next; }
    }
    ptr->next=new_node;
    new_node->next=NULL;

   return head;


}


