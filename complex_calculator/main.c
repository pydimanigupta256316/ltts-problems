/**
 * @file main.c
 * @author manigupta (manigupta@domain.com)
 * @brief 
 * @version 0.1
 * @date 2021-04-06
 *
 * @copyright Copyright (c) 2021
 * 
 */
#include<stdio.h>
#include "header.h"




void main(){
    complex a,b;
    float s,d,m,di,n;
    a.real=10;
    b.real=5;
    a.imag=6;
    b.imag=7;
    s=sum(a,b);
    d=diff(a,b);
    m=mull(a,b);
    di=divi(a,b);

   
}
