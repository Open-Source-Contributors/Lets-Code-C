# C Programming Coding Standards Guide

Follow these coding standards to maintain consistency, readability, and best practices in your C programming code.

## 1. Indentation and Braces:

- Use a consistent indentation style (e.g., 2 or 4 spaces).
- Place opening braces `{` on the same line as the function or control structure declaration.

```c
void exampleFunction() {
    // Code goes here
}
```
## 2. Naming Conventions:
- Use meaningful and descriptive variable and function names.
- Variable and function names should be in lowercase, with words separated by underscores.

```C
int calculate_sum(int num1, int num2) {
    // Code goes here
}
```

- Use ALL CAPS for special variables or constants.

```C
#define MAX_SIZE 100
int SPECIAL_VARIABLE = 42;
```

## 3. Comments:
- Add comments to explain complex logic or algorithms.
- Use comments to provide a brief overview of functions and important sections of code.

```C
/* Calculate the sum of two numbers */
int calculate_sum(int num1, int num2) {
    // Code goes here
}
```

## 4. Spacing:
- Use spaces to improve code readability.
- Add spaces around operators and after commas.

```C
int result = num1 + num2;
```

## 5. Constants:
- Use #define for constants.

```C
#define MAX_SIZE 100
```

Remember, adhering to coding standards is crucial for collaborative development and code maintenance.

Happy coding!
