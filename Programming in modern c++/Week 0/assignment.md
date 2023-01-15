# Solution for Week 0 Assignment 


1.   
    ```c
    #include<stdio.h>

    int main(){
        typedef double num[3];
        num array[5] = {1,2,3,4,5,6};
        printf("%u ", sizeof(array));
        printf("%.2f", array[1][1]);
        return 0;
    }
    ```
    Output: 
    ```
    120 5.00
    ```

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
    
2. 
    ```c
    #include<stdio.h>

    enum Covid_prevention{
        Sanitizer = 1,
        Wear_mask = 2,
        Soc_distance = 4

    };


    int main(){
        int myCovidPrevention = Wear_mask | Soc_distance;
        printf("%d", myCovidPrevention);
        return 0;
    }
    ```

    Output:
    ```
    6
    ```

    Solution:
    
    Printf statement returns the value of `myCovidPrevention` variable. 
    `myCovidPrevention` variable assigns to bitwise OR operator of `Wear_mask` and `Soc_distance` variable.

    ```
    Wear_mask = 2 (010)
    Soc_distance = 4 (100)

    So result is 010 | 100 = 110 (6)  

3. 
    ```c
    #include<stdio.h>

    int main(){

        int x = 1;
        switch (x)
        {
            case x:
                printf("case 1 ");
                break;
            case x+1:
                printf("case 2 ");
                break;
            default:
                printf("default block");
                break;
        }
        return 0;
    }
    ```

    Output: 
    ```
    Case label does not reduce to an integer constant.
    Compilation error: case must be integer or char constant.
    ```

    Solution:

    In switch statement, every case statement ust contains a constant value such as integer or a character etc.

4. Consider the following linked list:

    I -> I -> T -> K -> G -> P

    What is the output of the following function when it is called with the head of the list?

    ```c
    
    void fun(struct node* start){
        if(start == NULL)
            return;
        printf("%c", start->data);
        if(start->next != NULL);
            fun(start->next->next);
        printf("%c", start->data);
    }
    ```
      I -> I -> T -> K -> G -> P

      For above linked list,
    * At first, start node will be the `I NODE` , checks for start is NULL, it will return False so, it will first print the NODE data `I`, then it checks if next node is not null, it's not null so it will call itself with aargument of start->next->next. 
    * At second, fun is called with start->next->next. So it takes `T NODE` as a argument. same step follows. Prints `T`, then it will move to fun(next next)
    *  At third, fun is called with `G NODE` prints `G` and start-> next(`P` NODE ! = NULL). So fun(start->next->next)=>func(`P NODE`->next [NULL])=>func(NULL)
    * At fourth, something happens, start is NULL, so it returns, and goes back to previous executed function and prints the data which is letter `G`.
    * It continues and Prints `T` and `I`.


        

    