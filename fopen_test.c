//
// Created by Kim on 2024/5/26.
//

#include <stdio.h>
#include "fopen_test.h"

int main(int argc,char const *argv[]){
    FILE *fp= fopen("test_read.txt","r");
    printf("读取到的文件地址为%p\n",fp);
    if (fp){
        int num;
        fscanf(fp,"%d",&num);
        printf("%d\n",num);
        fclose(fp);
    }else{
        printf("无法打开文件");
    }

}