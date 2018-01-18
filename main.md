# stack over flow


[stackoverflow](https://stackoverflow.com/questions/5020362/declare-main-prototype)




# std


[International Standard](http://www.open-std.org/jtc1/sc22/wg14/www/docs/n1256.pdf)




# C language standard, draft n1256:

5.1.2.2.1 Program startup

1 The function called at program startup is named main. The implementation declares no prototype for this function. It shall be defined with a return type of int and with no parameters:


**`int main(void) { /* ... */ }`**


or with two parameters (referred to here as argc and argv, though any names may be used, as they are local to the function in which they are declared):


**`int main(int argc, char *argv[]) { /* ... */ }`**


or equivalent;9) or in some other implementation-defined manner.

