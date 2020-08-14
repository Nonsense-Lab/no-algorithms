# “什么是算法？”介绍
“什么是算法？”这是我们的**脂肪研究与促进研究所**的另一项工作，它显示**0和1**的好处。希望对于大多数程序员来说，这是一个过度的简化。

## 如何使用？
首先，**您是初学者吗？**

- 是：我建议我跑步阅读源代码并学习有用的算法（⌐■_■）~~（尽管我不认为在阅读时会阅读它）~~
- 否：您必须是老程序员，才能使用`clone`。

*（老程序员：您在阅读源代码吗？）*

### 你懒吗？
快来。

通常我们写一个名为`Init \ <function name \>（type）`的**宏**。例如
```c
#determine InitZeroOneSolve（类型1）
```

该宏有两件事：
- **Typedef**将指标函数定义为参数类型，以接受积分函数中用于计算的函数。
- 名为\ <名称函数\>的函数（例如，示例中的*ZeroOneSolve*）。

这是一些代码示例。

```c
#include "includes/zoknapsack.h"
#include <stdio.h>
#include <malloc.h>

// 此代码，非熟练工作。

int _ExampleFunc(int a, int b) { return 7; }

int main() {
  InitZeroOneSolve(int);
  printf("result=%d", ZeroOneSolve(1,2,(int*)malloc(sizeof(int)*7),(int*)malloc(sizeof(int)*7),(int*)malloc(sizeof(int)*7),_ExampleFunc));
  return 0;
}
