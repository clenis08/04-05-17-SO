#include <stdio.h>



int suma (int* a, int b) {


  return *a=*a+b;
}

int main(int argc, char** argv)

{
    int *a=3;
    int  b= 4;
    suma(*a,b);
    return 0;
}


