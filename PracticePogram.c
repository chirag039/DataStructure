#include <stdio.h>

struct student {
   int id;
   int age;
   int marks;
};
 
int main() {
   struct student data[100];
   int n,i; 
   
 
   printf("Enter how many students: ");
   scanf("%d", &n);
 
   for (i = 0; i < n; i++) {
         printf("Enter data of student %d for : ", i+1);
         scanf("%d %d %d", &data[i].id,&data[i].age,&data[i].marks);
      }
       printf("Display the students who seek admission");
       for (i = 0; i < n; i++)
       {
          if(data[i].age>20 & data[i].marks<=100{
                   printf("\nStudent %s got maximum marks = %d in Subject : %d",data[i].id,data[i].age,data[i].marks);

            }
        
       
 return 0;
}
       
 
 
    
     
    
