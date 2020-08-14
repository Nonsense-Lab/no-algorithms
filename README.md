> 不想看洋文？来 [算法是啥？](https://github.com/Nonsense-Lab/no-algorithms/blob/master/README_zh.md)

> 不期望看到外国的语言？访问 [无算法 (机翻版)](https://github.com/Nonsense-Lab/no-algorithms/blob/master/README_zh_MachineTranslate.md)

> Don't want to read proper English? Come [No-Algorithms (Machine Translated)](https://github.com/Nonsense-Lab/no-algorithms/blob/master/README_en_MachineTranslate.md)

# no-algorithms
no-algorithm is a header written in C by Nonsense-Lab for the 0 and 1's sake. Hope to make us, the programmers work simpler.

## How to use it?
If you are just a starter, we sincerely hope you look up the source code yourself to learn the useful algorithms.

If you are a seasoned programmer, just `git clone` it and include it to your C / C++ projects.

*(We know you will look up for the usage and the macros' name, right?)*

### To the lazy programmers.
Usually, our headers use a macro named Init\<FunctionName\>(type). e.g.
```
#define InitZeroOneSolve(type1)
```

It actually CREATES:
- **a typedef** that defines a function pointer, which will be used as the calculating function.
- And a Function named \<FunctionName\>.

The example code is shown below.

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
