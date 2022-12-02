#include <stdio.h>
#include <string.h>
struct Roommate //static linked list
{
    char name[10];  // maybe flexible array
    int age;
    struct Roommate *next;
};
int main(void)
{
    struct Roommate B1, B2, B3, *head, *p;
    strcpy(B1.name, "Ren");
    strcpy(B2.name, "Den");
    strcpy(B3.name, "Fang");
    B1.age = 19;
    B2.age = 18;
    B3.age = 20;
    
    head = &B1;
    B1.next = &B2;
    B2.next = &B3;
    B3.next = NULL;
    p = head;
    do
    {
        printf("%s%d\n", p->name, p->age);
        p=p->next;  // !!!
    } while (p != NULL);
    return 0;
}