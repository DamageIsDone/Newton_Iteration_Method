# Newton_Iteration_Method
Newton iteration method to find cubic root of a = 3.0

In the first Lecture (see the file in An introduction to Data Structures and Algorithms), we used the Newton iteration method to compute √a, where a is positive number. Following the derivation presented in Introduction.pdf, please write a C or C++ source code to compute 3√3.0.

The requirements are:

• To implement the Newton iteration method, you should provide two sub-functions in the source code to compute y = f(x) and the derivative of f(x), i.e., y′ = f′(x).

• Let the initial guess in the Newton iteration method be x[0] = 3.0, and the value obtained in the i-th iteration is x[i] (i = 1, 2, 3, . . . , 9). Use the library function "void *malloc(long size) " to allocate a memory block of at least size bytes and then assign the return pointer (using type conversion) to a pointer x so that x[i] (i = 0, 1, 2, 3, . . . , 9) can be used.

• In your code, please use the library function "double pow(double a, double x)" (to use this function, #include<math.h> or #include<cmath> for C++ is needed ) to compute a x.

• If your codes are correct, the values of x[i] (i=0,1,2,3,. . . ,9) will be those shown in Fig. 1. In your code, please print the values of x[i] (i=0,1,2,3,. . . ,9) in the format presented in Fig. 1.
