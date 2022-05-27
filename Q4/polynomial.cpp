//Traversal of a double linked list
#include <iostream>
using namespace std;

struct Node{
    int exp;
    float coeff;
    struct Node* next;
};
int main(){
    //Creating nodes for linked list 1
    struct Node* head= new struct Node;
    struct Node* second = new struct Node;
    struct Node* third = new struct Node;

    cout<<"Enter the co-effecient and respective exponent of x for the first quadratic polynomial: ";
    cin>>head->coeff>>head->exp;
    cin>>second->coeff>>second->exp;
    cin>>third->coeff>>third->exp;

    //Creation of first polynomial
    head->next=second;
    second->next=third;
    third->next=NULL;

    //Creating nodes for linked list 2
    struct Node* head2= new struct Node;
    struct Node* second2 = new struct Node;
    struct Node* third2 = new struct Node;

    cout<<"Enter the co-effecient and respective exponent of x for the second quadratic polynomial: ";
    cin>>head2->coeff>>head2->exp;
    cin>>second2->coeff>>second2->exp;
    cin>>third2->coeff>>third2->exp;

    //Creation of second polynomial
    head2->next=second2;
    second2->next=third2;
    third2->next=NULL;

    //TRAVERSAL OF FIRST POLYNOMIAL
    cout<<"Polynomial 1: ";
    struct Node* ptr = head;
    while(ptr!=NULL){
        cout<<"+"<<"("<<ptr->coeff<<"x^"<<ptr->exp<<")"<<" ";
        ptr=ptr->next;
    }

    //TRAVERSAL OF SECOND POLYNOMIAL
    cout<<endl<<"Polynomial 2: ";
    ptr = head2;
    while(ptr!=NULL){
        cout<<"+"<<"("<<ptr->coeff<<"x^"<<ptr->exp<<")"<<" ";
        ptr=ptr->next;
    }

    //ADDITION OF TWO POLYNOMIALS
    struct Node* sum_h;
    struct Node* sum_s;
    struct Node* sum_t;

    sum_h->coeff=head->coeff+head2->coeff;
    sum_s->coeff=second->coeff+second2->coeff;
    sum_t->coeff=third->coeff+third2->coeff;

    sum_h->exp=head->exp;
    sum_s->exp=second->exp;
    sum_t->exp=third->exp;

    //Creation of sum polynomial
    sum_h->next=sum_s;
    sum_s->next=sum_t;
    sum_t->next=NULL;

    //TRAVERSAL OF SUM POLYNOMIAL
    cout<<endl<<"Polynomial sum: ";
    ptr = sum_h;
    while(ptr!=NULL){
        cout<<"+"<<"("<<ptr->coeff<<"x^"<<ptr->exp<<")"<<" ";
        ptr=ptr->next;
    }
}