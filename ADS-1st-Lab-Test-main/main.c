#include <stdio.h>
#include <stdlib.h>

#include <stdint.h>
#include "header.h"
#include <assert.h>
#include <stdlib.h>

void test_list(){
    Node1 s1= Slist_new();
    Node1 *s = &s1;
    assert(s->count==0);
}
void test_customer(){
    Customer c1 = queue_new();
    Customer *c = &c1;
    assert(c->countc==0);
}

void test_enqueue(){
    Node1 s1= Slist_new();
    Node1 *s = &s1;
    assert(s->count==0);
    Customer c1 = queue_new();
    Customer *c = &c1;
    assert(c->countc==0);
    Node o;
    Transaction t;
    c = enqueue(s,c,'shivam',24,001234567890,25,7972059365,10000,&o,&t);

}




int main()
{
    //test_list();
    //test_customer();
    //test_enqueue
    //printf("Hello world!\n");
    return 0;
}
