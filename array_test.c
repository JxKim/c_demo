
# include <stdio.h>
#define N 10
#define n 23
int find_largest(const int a[],int e);
int main_array_test(void )
{
//    int a[2][2]={{1,2},{3,4}};
//    find_largest(a[0],4);
//    int b[5][5],(*p)[5],i;
//    i=4;
//
//    int (*w)[n]; //此处w为指向数组当中某一行的指针
//    for (p=&b[0];p<&b[5];p++)
//        (*p)[i]=0;
    int a[4]={1,2,3,4};
    int i=2;
    printf("asd%d\n",a[i]);
    printf("sd%d",i[a]);
    char *p="abc";
    char str[]={'a','b','\0'};
    char str1[23];
    printf("%s\n",str);
    puts(str);
    scanf("%s",str1);
    printf("str1为：%s",str1);
//    *p='d';


}

int find_largest(const int a[],int e)
{
//    a[0]=23; 无法对const类型的变量进行赋值
    int max=23;
    int *d=&max;
    *d=23;
    return *d;
}

