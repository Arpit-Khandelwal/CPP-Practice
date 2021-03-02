#include<stdio.h>
#include<stdlib.h>
#include<string.h>
struct node
{
    int empid,age;
    char name [20];
    struct node* next;
};
struct node *h,*t;
void create()
{
    struct node *tmp;
    tmp=(struct node*)malloc(sizeof (struct node));
    printf("\nEmpId:\n ");
    scanf("%d",&tmp->empid);
    printf("\nAge:\n");
    scanf("%d",&tmp->age);
    printf("\nName:\n");
    scanf("%s",&tmp->name);
    if (h==NULL)
        {
        h=tmp;
        t=tmp;
        h->next=NULL;
        }
    else
        {
        t->next=tmp;
        t=tmp;
        t->next=NULL;
        }
}
void display()
{
    struct node *tmp;
    tmp=(struct node*)malloc(sizeof (struct node));
    for(tmp=h;tmp!=NULL;tmp=tmp->next)
    {
        printf("\nID: %d\tName: %s\tAge: %d\n",tmp->empid,tmp->name,tmp->age);
    }
}

void del()
{
    {
   int empid;
   printf("\nEnter emp ID to delete: ");
   scanf("%d",&empid);
   struct node *ptr=h, *p=NULL;
   int flag = 0;
   while(ptr!= NULL)
   {
      if(ptr->empid == empid)
      {
         printf("\nID Found\n");
         if (p==NULL)  h=NULL;
         else {
         printf("\nEmp id : %d\tName : %s\tAge : %d is Deleted\n",ptr->empid,ptr->name,ptr->age);
         p->next = ptr->next;}
         flag = 1;
         break;
      }
      p=ptr;
      ptr=ptr->next;
    }
    if (flag == 0) printf("\nElement not Found\n");
    display();
    }
}

int main()
{
   while(1)
   {
      printf("\n\n1. Enter data\n2. Remove employee using ID\n3. Display list\n4. Exit\n");
      int n;
      scanf("%d",&n);
      switch (n)
      {
      case 1:{ create();break; }
      case 2: {del(); break; }
      case 3: { display(); break;}
      case 4: { exit(0); break;}
      default: printf("Invalid ,Try again\n");
      }
   }
   return 0;
}


