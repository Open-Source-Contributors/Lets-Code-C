# Pointers to Structures

In C programming, pointers to structures allow efficient handling of complex data structures. Let's break down the concepts step by step.

### Declare a Pointer to Structures

Declare a pointer to structures of type `struct STUDENT`:

```c
struct STUDENT *sptr;
```
### Allocate memory for one structure:

```c
sptr = (struct STUDENT *) malloc(sizeof(struct STUDENT));
```
Now, sptr points to a memory block that can be treated as a regular struct STUDENT.

### The -> Operator
The -> operator, also known as the "arrow" operator, simplifies structure member access through pointers. Using pointer->field:

- The left side, pointer, is an expression evaluating to a pointer to a structure.
- The right side, field, is the name of the field within the pointed-to structure.
- The result is an l-value representing the desired structure's field, obtained by dereferencing the pointer.
- This operation is equivalent to the more explicit form: (*pointer).field.

### Declaration and Initialization of Pointers to Structures
A pointer to a structure is declared by specifying the structure type followed by an asterisk (*) and the pointer name. Initialization involves obtaining the address of a structure variable.

```c
struct Student {
    int rollNumber;
    char name[50];
    float marks;
};

int main() {
    struct Student stu1;

    struct Student *ptr = &stu1;

    ptr->rollNumber = 101;
    strcpy(ptr->name, "Radhe Shyam");
    ptr->marks = 85.5;

    printf("Roll Number: %d\n", ptr->rollNumber);
    printf("Name: %s\n", ptr->name);
    printf("Marks: %.2f\n", ptr->marks);

    return 0;
}
```
