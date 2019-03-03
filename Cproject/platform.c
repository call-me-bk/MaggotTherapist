#include<stdio.h>
#include<stdlib.h>
#include "ourFile.h"
const char WINDOWS = 'c';
const char LINUX = 'l';

char getPlatform(){
    if(
        (system("winver"))!=-1 && (system("winver"))!=127 )
    return WINDOWS;
    else
    if(
        ((system("uname")!=-1 && system("uname")!=127) || (system("uname"))=="Linux"))
        return LINUX;
    
}