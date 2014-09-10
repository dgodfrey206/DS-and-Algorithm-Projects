##Project 1

1. Write a non-recursive routine to compute the factorial of n according to Equation (2.3). Calculate the running time predicted by the detailed model given in Section (\#secmodeldetailed) and the simplified model given in Section (\#secmodelsimplified).

The book outlines the detailed computer model, the basic Axioms of which can be found [here](http://brpreiss.com/books/opus4/html/page36.html). To calculate the total running time of the program, we simply translate each statement in the program to its corresponding constant. Taking from our non-recursive-factorial.cpp...

```
uintmax_t fact(uintmax_t n)
{
    if (n <= 0) return 1;
    int prod = 1;

    for (int i = 1; i <= n; ++i)
        prod *= i;

    return prod;
}
```

[](http://i.gyazo.com/fa7dcda005b313878b0592b573f23eb9.png)