> This file has been translated from the original English version of the README file by beloved [Google Translate](https://translate.google.com).

# No algorithm
Title file written by Nonsense-Lab with 0 and 1 in C without algorithm. I hope the programmer simplifies the task.

## How is it used?
If you are a beginner, we sincerely hope that the source code will help you learn the algorithm.

If you are an experienced programmer, "clone" and include it in your C / C ++ project.

* (Even though we know it looks like a username and a macro?) *

### Lazy programmers.
Our header files usually use a macro named Init \ <FunctionName \> (type). For example,
```
#define InitZeroOneSolve (type1)
```

create:
- Specify the type of function indicator used as a calculation function.
- There is also a function called the <FunctionName \> function.

An example code is shown below.

```c
#include "includes/zoknapsack.h"
#include <stdio.h>
#include <malloc.h>

// This is an example, so I'll just initialize the function.

int _ExampleFunc(int a, int b) { return 7; }

int main() {
  InitZeroOneSolve(int);
  printf("result=%d", ZeroOneSolve(1,2,(int*)malloc(sizeof(int)*7),(int*)malloc(sizeof(int)*7),(int*)malloc(sizeof(int)*7),_ExampleFunc));
  return 0;
}
