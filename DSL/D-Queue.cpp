#include <iostream>
#include <stdio.h>
#define SIZE 10
using namespace std;

class Dequeue{
   int a[20],f,r;
   public:
   Dequeue(): f(-1),r(-1) {};
   void insert_front(int x);
   void insert_rear(int x);
   void delete_front();
   void delete_rear();
   void show();
};

void Dequeue::insert_rear(int x){
   if (r>=SIZE-1){
      printf("Overflow!");
   } else{ 
      if (f==-1){
         f++;
         r++;
      } else{
         r++;
      }
      a[r]=x;
      printf("Item Inserted!");
   }
}

void Dequeue::insert_front(int x){
   if (f==-1){
      f=0;
      a[++r]=x;
      printf("Inserted");
   } else if (f!=0){
      a[--f]=x;
      printf("Inserted");
   } else{
      printf("Overflow");
   }
}

