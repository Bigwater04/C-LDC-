/* 2.29
 * This program was written by Bigwater04
 * Produced date 10/9/2019, Northeastern University,China
 * 题目：请编写一个程序：打印某些字母符号等字符所对应的整型的C语言程序.
 * 这是一个小小的提前学习,char类型数据转化成int类型就会打印出对应的ASCII码
 */

#include <stdio.h>

int main(void) 
{
		int a;
		printf("Pafupafu Nya Nya~Pafu pafu Nya Nya~\n");//输出酷炫的提示语
		for ( a = 65; a <=90 ; a++)
		{
			printf("%c:%d\t", a, a);//输出大写字母ASCII
		}
		for (a = 97; a <= 122; a++)
		{
			printf("%c:%d\t", a, a);//输出小写字母ASCII
		}
}
