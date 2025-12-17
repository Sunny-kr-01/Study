while(ptr1!=NULL && ptr2!=NULL){
        ptr1->next=ptr2->next;
        ptr2->next=ptr1;
        ptr1=ptr1->next;
        ptr2=ptr1->next;
    }