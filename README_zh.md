> 参照 README 的 **英文** 版本编写，大家看个乐呵。

# 「算法是啥？」介绍
「算法是啥？」是咱 **吃饱了撑研究所** 的又一力作，图个 **0 和 1** 的吉利。 希望能让咱广大程序员群体干活更简单。

## 咋用啊？
首先，**你是新手吗？**

- 是：哥哥奉劝你先跑去看源代码，学习一下有用的算法(⌐■_■) ~~（虽然我在写README的时候就猜到你不会看）~~ 
- 不是：你都老程序员了肯定门儿清，`clone` 一下就能使了。

*（对老程序员：你会看源代码的，对吧？）*

### 你懒？
早猜到了。

咱一般会写一个**宏**，命名为 `Init \<函数名称\>(类型)` 。比如说
```c
#define InitZeroOneSolve(type1)
```

这个宏整出来俩玩意儿：
- **一个 typedef**，定义了一个函数指针，用来作为参数类型在整出来的函数里接收用于计算的函数。
- 一个叫 \<函数名称\> 的函数（比如例子中的 *ZeroOneSolve*）。

示例代码咱就放这儿了嗷。

```c
#include "includes/zoknapsack.h"
#include <stdio.h>
#include <malloc.h>

// 这段代码，不熟练的干活

int _ExampleFunc(int a, int b) { return 7; }

int main() {
  InitZeroOneSolve(int);
  printf("result=%d", ZeroOneSolve(1,2,(int*)malloc(sizeof(int)*7),(int*)malloc(sizeof(int)*7),(int*)malloc(sizeof(int)*7),_ExampleFunc));
  return 0;
}
```
