#include<stdio.h>
#include<stdlib.h>
#include<dirent.h>
#include<string.h>
#include "ourFile.h"
void initialise(struct workingDIR ref){
    int fileCount=0,i=0,dirCH=0;
    DIR * dirp;
    struct dirent * entry;
    char path[100],ch;
    printf("\nPlease make sure that the working directory has only C source files");
    printf("\nTo continue working in the present directory, please press zero \"0\", \nto change the directory, press any other number\n");
    scanf("%d",&dirCH);
    if(dirCH==0){
        goto here;
    //opendir(".");
    }
    else if(isdigit(dirCH))
    {
        for(i=0;i<FILENAME_MAX;i++)
        scanf("%s",path);
        //opendir(path);
        //getcwd(path,FILENAME_MAX);
    }
    while((ch=getchar())!='\n'){
        path[i]=ch;
        i++;
    }    
    dirp=opendir("path");
    here:dirp=opendir(getcwd(path,FILENAME_MAX));
    while((entry=readdir(dirp))!= NULL){
        if(entry->d_type == 0 ){
            fileCount++;
        }
    }
    strcpy((ref.path),path);
    ref.fileCount=fileCount;

}