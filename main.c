#include <stdio.h>

int main2() {
    printf("Hello, World!\n");
    return 1;
}


int main3(){
    int i=1; //没有对变量做初始化，会直接使用这个地址下的值
    int j;

    int amount=100;
    scanf("%d %d",&i,&amount);
    j=i+10;

    printf("%d\n",j);

}

int main4(){
    int foot;
    int inch;
    int x=18;

    printf("%x",x);
    printf("%d\n",5==3);
//    出现在scanf当中的东西是一定要输入的东西
//    scanf("price%d %d",&foot,&inch);
//    %f是单精度浮点数的format str
//    $lf是double类型数据的format
//   %x表示的是以十六进制的方式输出
    printf("height is %f",((foot+inch/12.0)*0.3048));
}
//+= c当中也有这种复合运算符
//有机器指令专门做+=, -=这种类似的指令
//单目运算符，count++,前缀是++以前的，后缀是++以后的结果
//INC, DEC
/*
 * PAT用来做测试的，todo看下是否可以登录进去
 * BCD是什么
 *
 * C当中关系运算的结果是整数，而不是布尔值，成立则为1，否则为0
 *
 *
 * int就是用来表达寄存器的大小，寄存器有的是32位，有的是64
 * 补码的意义就是拿补码和原码可以加出一个溢出的零
 */

int main5(){
    unsigned char c=255; // 如果不加unsigned，c打印出来的值为-1，因为c只占据了一个字节
    // unsigned 表示不以补码的形式表示整数，
    char d=255U;
    printf("sizeof c %d \n",sizeof(c));
    printf("c%d \n",c);
    printf("d %d",d);
}