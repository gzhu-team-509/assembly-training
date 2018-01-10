# 新生基础训练Alpha

https://vjudge.net/contest/160731

## 总结

### 逻辑

1. 取模/除法时注意0。
2. 要统计无序集合中元素的个数，可以将无序集合转换为有序集合，然后通过比较相邻的两项是否相同来统计。`v.cpp`
3. 适当枚举。 `t.cpp`
4. 按序查找的最佳实践见`s.cpp`。

### 语言

1. 注意`tolower() toupper()`等C风格函数的返回值是int类型，不是char类型。
2. Range For语法
