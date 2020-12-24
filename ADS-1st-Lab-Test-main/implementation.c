#include <stdint.h>
#include "header.h"
#include <stdlib.h>
#include <assert.h>
#include <string.h>

//CREATING A LIST OF ALL CUSTOMERS//
Node1 Slist_new(){
    Slist s1= {0,0,NULL,NULL};
    return s1;
}

//CREATING QUEUE FOR EACH CUSTOMER//
Customer queue_new(){
    Customer c1 = {0,NULL,NULL};
    return c1;
}

//CREATING A NODE//
static Slist* _get_new_node_(char* name,uint8_t age,int32_t pan,uint8_t account_type,int32_t* phone_number,uint32_t deposit_amount){
    Slist *newnode = (Slist*)malloc(sizeof(Slist));
    newnode->name = name;
    newnode->age = age;
    newnode->pan = pan;
    newnode->account_type = account_type;
    newnode->phone_number= phone_number;
    newnode->deposit_amount= deposit_amount;
    newnode->next=NULL;
    return newnode;
}

//ENQUEUE INFORMATION FOR NEW CUSTOMER//
  Customer* enqueue(Node1* s,Customer *c,char* name,uint8_t age,int32_t pan,uint8_t account_type,uint32_t phone_number, uint32_t deposit_amount, Transaction *t
                Node *o){
                assert(s!=NULL && c!= NULL);
                c->next = s->head;
                if(s->head==NULL){
                   s->head = s->tail = c;
               }else{
               s->head = c;
                }



