#ifndef HEADER_H_INCLUDED
#define HEADER_H_INCLUDED


typedef struct _acc_ Slist;
struct _acc_{
    char* name;
    uint8_t age;
    int32_t pan;
    uint8_t* account_type;
    int32_t phone_number;
    uint32_t deposit_amount;
    Node *next;
};

typedef struct _operations_ Node;
struct _operations_{
    int32_t credit;
    int32_t debit;
    int32_t balance_enquiry;
    int32_t count_credit;
    int32_t debit_transactions;
};

typedef struct _bankstaff_ Node1;
struct _bankstaff_{
    int32_t count_customers;
    uint8_t customer_category;
    Node1 *head;
    Node1 *tail;
};

typedef struct _transaction_ Transaction;
struct _transaction_{
    char* name;
    int32_t balance;
};

typedef struct _customer_ Customer;
struct _customer_{
    int32_t countc;
    Node *rear;
    Customer* next;
};



Customer queue_new();
Slist Slist_new();
Customer* enqueue(Node1* s,Customer *c,char* name,uint8_t age,int32_t pan,uint8_t account_type,uint32_t phone_number, uint32_t deposit_amount, Transaction *t
                Node *o);



#endif // HEADER_H_INCLUDED
