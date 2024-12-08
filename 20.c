#include <stdio.h>
// Defining the structure to store student information
struct Student {
 char name[50];
 int rollNumber;
 float marks;
};
int main(){
 struct Student s1;
 
 // Input student information
 printf("Enter student's name: ");
 fgets(s1.name, sizeof(s1.name), stdin); // Using fgets to read string input
 printf("Enter roll number: ");
 scanf("%d", &s1.rollNumber);
 printf("Enter marks: ");
 scanf("%f", &s1.marks);

 // Display student information
 printf("\nStudent Information:\n");
 printf("Name: %s", s1.name);
 printf("Roll Number: %d\n", s1.rollNumber);
 printf("Marks: %.2f\n", s1.marks);
 return 0;
}