#ifndef __learnCplus__print_info__
#define __learnCplus__print_info__

#include <stdio.h>

#define P(EX) cout << #EX <<":"<<sizeof(EX)<< ": " << EX << ":"<<&EX<<"value:"<<*EX<<endl;

void print(int num);
#endif /* defined(__learnCplus__print_info__) */

