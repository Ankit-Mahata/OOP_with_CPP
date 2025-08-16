// structure in C
// we cannot make functions inside structures in C
#include<stdio.h>
#include<string.h>

struct student {
    int roll;
    char name[20];
    float marks;
};
void output(struct student s)
{
    printf("\nRoll: %d\n", s.roll);
    printf("Name: %s\n", s.name);
    printf("Marks: %.2f\n", s.marks);
}
int main()
{
    struct student s1={12,"Ankit",89.99};
    struct student s2;
    s2.roll=24;
   // s2.name="Sandy"; // invalid , because array name is not assignable and is treated as constant pointer
   strcpy(s2.name, "Sandy");
    s2.marks=78.50;
    output(s1);
    output(s2);


}
