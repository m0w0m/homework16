#include <stdio.h>
#include <stdlib.h> 
#include <string.h>

int printNumber(char num) {
	switch (num) {
	case '0':
		return 0;
		break;
	case '1':
		printf("壹");
		return 1;
		break;
	case '2':
		printf("貳");
		return 2;
		break;
	case '3':
		printf("參");
		return 3;
		break;
	case '4':
		printf("肆");
		return 4;
		break;
	case '5':
		printf("伍");
		return 5;
		break;
	case '6':
		printf("陸");
		return 6;
		break;
	case '7':
		printf("柒");
		return 7;
		break;
	case '8':
		printf("捌");
		return 8;
		break;
	case '9':
		printf("玖");
		return 9;
		break;
	}
}

int main(void) {
	// your code goes here
	int i, j, len;
	char n[100];
	printf("請輸入一個整數(此數需要小於16位數)：");
	scanf("%s", n);
	len = strlen(n);

	switch (len) {
	case 16:
		if (printNumber(n[0])) printf("仟");
		if (printNumber(n[1])) printf("佰");
		if (printNumber(n[2])) printf("拾");
		if (printNumber(n[3])) printf("兆");
		if (printNumber(n[4])) printf("仟");
		if (printNumber(n[5])) printf("佰");
		if (printNumber(n[6])) printf("拾");
		if (printNumber(n[7])) printf("億");
		if (printNumber(n[8])) printf("仟");
		if (printNumber(n[9])) printf("佰");
		if (printNumber(n[10])) printf("拾");
		if (printNumber(n[11])) printf("萬");
		if (printNumber(n[12])) printf("仟");
		if (printNumber(n[13])) printf("佰");
		if (printNumber(n[14])) printf("拾");
		printNumber(n[15]);
		printf("元整\n");
		break;
	case 15:
		if (printNumber(n[0])) printf("佰");
		if (printNumber(n[1])) printf("拾");
		if (printNumber(n[2])) printf("兆");
		if (printNumber(n[3])) printf("仟");
		if (printNumber(n[4])) printf("佰");
		if (printNumber(n[5])) printf("拾");
		if (printNumber(n[6])) printf("億");
		if (printNumber(n[7])) printf("仟");
		if (printNumber(n[8])) printf("佰");
		if (printNumber(n[9])) printf("拾");
		if (printNumber(n[10])) printf("萬");
		if (printNumber(n[11])) printf("仟");
		if (printNumber(n[12])) printf("佰");
		if (printNumber(n[13])) printf("拾");
		printNumber(n[14]);
		printf("元整\n");
		break;
	case 14:
		if (printNumber(n[0])) printf("拾");
		if (printNumber(n[1])) printf("兆");
		if (printNumber(n[2])) printf("仟");
		if (printNumber(n[3])) printf("佰");
		if (printNumber(n[4])) printf("拾");
		if (printNumber(n[5])) printf("億");
		if (printNumber(n[6])) printf("仟");
		if (printNumber(n[7])) printf("佰");
		if (printNumber(n[8])) printf("拾");
		if (printNumber(n[9])) printf("萬");
		if (printNumber(n[10])) printf("仟");
		if (printNumber(n[11])) printf("佰");
		if (printNumber(n[12])) printf("拾");
		printNumber(n[13]);
		printf("元整\n");
		break;
	case 13:
		if (printNumber(n[0])) printf("兆");
		if (printNumber(n[1])) printf("仟");
		if (printNumber(n[2])) printf("佰");
		if (printNumber(n[3])) printf("拾");
		if (printNumber(n[4])) printf("億");
		if (printNumber(n[5])) printf("仟");
		if (printNumber(n[6])) printf("佰");
		if (printNumber(n[7])) printf("拾");
		if (printNumber(n[8])) printf("萬");
		if (printNumber(n[9])) printf("仟");
		if (printNumber(n[10])) printf("佰");
		if (printNumber(n[11])) printf("拾");
		printNumber(n[12]);
		printf("元整\n");
		break;
	case 12:
		if (printNumber(n[0])) printf("仟");
		if (printNumber(n[1])) printf("佰"); 
		if (printNumber(n[2])) printf("拾");
		if (printNumber(n[3])) printf("億");
		if (printNumber(n[4])) printf("仟");
		if (printNumber(n[5])) printf("佰");
		if (printNumber(n[6])) printf("拾");
		if (printNumber(n[7])) printf("萬");
		if (printNumber(n[8])) printf("仟");
		if (printNumber(n[9])) printf("佰");
		if (printNumber(n[10])) printf("拾");
		printNumber(n[11]);
		printf("元整\n");
		break;
	case 11:
		if (printNumber(n[0])) printf("佰");
		if (printNumber(n[1])) printf("拾");
		if (printNumber(n[2])) printf("億");
		if (printNumber(n[3])) printf("仟");
		if (printNumber(n[4])) printf("佰");
		if (printNumber(n[5])) printf("拾");
		if (printNumber(n[6])) printf("萬");
		if (printNumber(n[7])) printf("仟");
		if (printNumber(n[8])) printf("佰");
		if (printNumber(n[9])) printf("拾");
		printNumber(n[10]);
		printf("元整\n");
		break;
	case 10:
		if (printNumber(n[0])) printf("拾");
		if (printNumber(n[1])) printf("億");
		if (printNumber(n[2])) printf("仟");
		if (printNumber(n[3])) printf("佰");
		if (printNumber(n[4])) printf("拾");
		if (printNumber(n[5])) printf("萬");
		if (printNumber(n[6])) printf("仟");
		if (printNumber(n[7])) printf("佰");
		if (printNumber(n[8])) printf("拾");
		printNumber(n[9]);
		printf("元整\n");
		break;
	case 9:
		if (printNumber(n[0])) printf("億");
		if (printNumber(n[1])) printf("仟");
		if (printNumber(n[2])) printf("佰");
		if (printNumber(n[3])) printf("拾");
		if (printNumber(n[4])) printf("萬");
		if (printNumber(n[5])) printf("仟");
		if (printNumber(n[6])) printf("佰");
		if (printNumber(n[7])) printf("拾");
		printNumber(n[8]);
		printf("元整\n");
		break;
	case 8:
		if (printNumber(n[0])) printf("仟");
		if (printNumber(n[1])) printf("佰");
		if (printNumber(n[2])) printf("拾");
		if (printNumber(n[3])) printf("萬");
		if (printNumber(n[4])) printf("仟");
		if (printNumber(n[5])) printf("佰");
		if (printNumber(n[6])) printf("拾");
		printNumber(n[7]);
		printf("元整\n");
		break;
	case 7:
		if (printNumber(n[0])) printf("佰");
		if (printNumber(n[1])) printf("拾");
		if (printNumber(n[2])) printf("萬");
		if (printNumber(n[3])) printf("仟");
		if (printNumber(n[4])) printf("佰");
		if (printNumber(n[5])) printf("拾");
		printNumber(n[6]);
		printf("元整\n");
		break;
	case 6:
		if (printNumber(n[0])) printf("拾");
		if (printNumber(n[1])) printf("萬");
		if (printNumber(n[2])) printf("仟");
		if (printNumber(n[3])) printf("佰");
		if (printNumber(n[4])) printf("拾");
		printNumber(n[5]);
		printf("元整\n");
		break;
	case 5:
		if (printNumber(n[0])) printf("萬");
		if (printNumber(n[1])) printf("仟");
		if (printNumber(n[2])) printf("佰");
		if (printNumber(n[3])) printf("拾");
		printNumber(n[4]);
		printf("元整\n");
		break;
	case 4:
		if (printNumber(n[0])) printf("仟");
		if (printNumber(n[1])) printf("佰");
		if (printNumber(n[2])) printf("拾");
		printNumber(n[3]);
		printf("元整\n");
		break;
	case 3:
		if (printNumber(n[0])) printf("佰");
		if (printNumber(n[1])) printf("拾");
		printNumber(n[2]);
		printf("元整\n");
		break;
	case 2:
		if (printNumber(n[0])) printf("拾");
		printNumber(n[1]);
		printf("元整\n");
		break;
	case 1:
		printNumber(n[0]);
		printf("元整\n");
		break;
	default:
		printf("out of range\n");
		exit(0);
		break;
	}
	system("pause");

	return 0;
}
