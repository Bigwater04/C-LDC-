/* 2.18
 * This program was written by Hailing Su
 * Produced date 10/9/2019, Northeastern University,China
 * ��Ŀ�����дһ���������û�����������������ȡ�û������������������ӡ
 * ���нϴ���Ǹ����������Ŵ�ӡ��is larger���������������ȣ���ӡ��Ϣ
 * ��These numbers are equal����ֻʹ�ñ�����ѧ����if���ĵ���֧ѡ����ʽ��
 */

#include <stdio.h>

int main(void){
	int data1, data2; //Declare two integer variables
	printf ("Please input two integers:\n");    //Prompt user to enter data

	scanf("%d%d", &data1, &data2);  //Get input data from keyboard
    //Compare data1 and data2
	if(data1 > data2)
	    printf("%d is larger\n", data1);  //Output data1
	if(data1 < data2)
	    printf("%d is larger\n", data2);  //Output data2
	if(data1 == data2)
	    printf("These numbers are equal\n");
	return 0;
}
