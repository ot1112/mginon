#ifndef __BANKING_COMMON_H__
#define __BANKING_COMMON_H__


#include <cstring>
#include <cstdlib>
#include <iostream>
using namespace std;

const int NAME_LEN=20;
//선택 메뉴
enum {MAKE=49, DEPOSIT, WITHDRAW, INQUIRE, EXIT};

//신용등급
enum {LEVEL_A=7, LEVEL_B=4, LEVEL_C=2};


//계좌의 종류
enum {NORMAL=1, CREDIT=2};



#endif;
