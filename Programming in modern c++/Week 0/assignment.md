# Solution for Week 0 Assignment 


### 1. 
![A1](./img/a0q1.jpg)
Output: 
```
120 5.00
```
>answer: `b`

Solution:
The first `printf()` statement is using the `sizeof()` operator to get the size of the array variable in bytes. Since each element of the array is an array of 3 doubles, which are 8 bytes each, the total size of the array is 5 * 8 * 3 = 120 bytes.

The second `printf()` statement is printing the value of `array[1][1]`, which is the second element of the second sub-array within the main array. Since the array is initialized with `{1,2,3,4,5,6}`, so array becomes, 
``` 
a[0][0] = 1
a[0][1] = 2
a[0][2] = 3
a[1][0] = 4
a[1][1] = 5
a[1][2] = 6
```
---
### 2. 
![A2](./img/a0q2.jpg)

Output:
```
6
```
>answer: `c`

Solution: 
Printf statement returns the value of `myCovidPrevention` variable. 
`myCovidPrevention` variable assigns to bitwise OR operator of `Wear_mask` and `Soc_distance` variable.

```
Wear_mask = 2 (010)
Soc_distance = 4 (100)

So result is 010 | 100 = 110 (6)  
```
---
### 3. 
![A3](./img/a0q3.jpg)
Output: 
```
Case label does not reduce to an integer constant.
Compilation error: case must be integer or char constant.
```
>answer: `d`

Solution:
In switch statement, every case statement ust contains a constant value such as integer or a character etc.

---

### 4. 
![A4](./img/a0q4.jpg)
Output:
```
ITGGTI
```
>answer: `c`

Solution: 
I -> I -> T -> K -> G -> P

For above linked list,
* At first, start node will be the `I NODE` , checks for start is NULL, it will return False so, it will first print the NODE data `I`, then it checks if next node is not null, it's not null so it will call itself with aargument of start->next->next. 
* At second, fun is called with start->next->next. So it takes `T NODE` as a argument. same step follows. Prints `T`, then it will move to fun(next next)
*  At third, fun is called with `G NODE` prints `G` and start-> next(`P` NODE ! = NULL). So fun(start->next->next)=>func(`P NODE`->next [NULL])=>func(NULL)
* At fourth, something happens, start is NULL, so it returns, and goes back to previous executed function and prints the data which is letter `G`.
* It continues and Prints `T` and `I`.

---
### 5.
![A5](./img/a0q5.jpg)

>answer: `d`

```c
void push1(){
    int item;
    if(t1 == t2-1){
        printf("\nSTACK OVERFLOW");
        return;
    }
    printf("\nEnter item: ");
    scanf("%d", &item);
    t1++;
    A[t1] = item;
}
```

---
### 6.
![A6](./img/a0q6.jpg)

Output 
```
```
>answer:

Solution

---
### 7.
![A7](./img/a0q7.jpg)

Output
```
30
```
>answer: `b`

Solution: 

This is a simple C program that assigns the value of x to x+5 (i.e. x becomes 6) and then assigns the value of x*5 to y (i.e. y becomes 30). Then it uses the printf() function to print the value of y on the screen.

When this program is compiled and run, it will output the number 30

---

### 8.
![A8](./img/a0q8.jpg)

Program: 
```c
#include<stdio.h>


int main(){
    int arr[5][10][20];
    int res;
    arr[2][6][10] = 100;

    res = ((**(*arr+2)+6)+10);
    printf("\n%d", res);
    
    res = (**(*(arr+2)+6)+10);
    printf("\n%d", res);

    res = (*(**(arr+2)+6)+10);
    printf("\n%d", res);

    res = *(*(*(arr+2)+6)+10);
    printf("\n%d", res);

    return 0;
}
```
Output
```
100
```

>answer: `d`


---
### 9.
![A9](./img/a0q9.jpg)

Output
```
6, 6
```
>answer: `d` 

Solution: 

p = &n // p is the address of n

*p +=1  // Adds 1 to the value of n

---
### 10.
![A10](./img/a0q10.jpg)

Output
```
Science 80
```
>answer: `a`

Solution: First print statement gives the subject of 2nd result. And second print statement gives the marks of (r+2) means, pointer arithmetic in array, so it goes to index 2, in index 2 English subject is there. So marks of english will be printed.

---
### 11.
![A11](./img/a0q11.jpg)

Output
```
teller1: Hello
teller2: Hi
teller3: Good Morning
```
>answer: `b`

Solution: 
```c
typedef void (*F_PTR)(char*);
```
This line of code defines a new type called "F_PTR" which is a pointer to a function that takes a single parameter of type "char*" and returns "void". The function pointer can be used to point to a specific function that matches this signature and can be invoked using the function pointer.

---
### 12.
![A12](./img/a0q12.jpg)

Output
```
```
>answer: 

Solution: 

---
### 13.
![A13](./img/a0q13.jpg)

Output
```
```
>answer: 

Solution: 

---
### 14.
![A14](./img/a0q14.jpg)

Output
```
```
>answer: 

Solution: 

---
### 15.
![A15](./img/a0q15.jpg)

Output
```
```
>answer: 

Solution: 

---