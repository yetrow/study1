#include <stdio.h>
int main() {
	int year, month, day;
	int sum;
	
	printf("请输入年月日0\n");
		scanf_s("%d %d %d", &year, &month, &day);
	
		switch (month) {
		case 1:
			sum = day;
			break;
		case 2:
			sum = 31+day;
			break;
		case 3:
			sum = 31+28+day;
			break;
		case 4:
			sum = 31+28+31+day;
			break;
		case 5:
			sum = 31+28+31+30+day;
			break;
		case 6:
			sum = 31 + 28 + 31 + 30 + 31 + day;
			break;
		case 7:
			sum = 31 + 28 + 31 + 30 + 31 +30+day;
			break;
		case 8:
			sum = 31 + 28 + 31 + 30 + 31 + 30+31+day;
			break;
		case 9:
			sum = 31 + 28 + 31 + 30 + 31 + 30+31+31+day;
			break;
		case 10:
			sum = 31 + 28 + 31 + 30 + 31 + 30+31+31+30+day;
			break;
		case 11:
			sum = 31 + 28 + 31 + 30 + 31 +30+31+31+30+30+ day;
			break;
		case 12:
			sum = 31 + 28 + 31 + 30 + 31 + 30 + 31 + 31 + 30 + 30 + 31 + day;
			break;
		default:
			sum = 0;
			printf("你输入的月份有误\n");
			break;		
		}
		
		if (month > 2 && ((year % 4 == 0 && year % 100 != 0) || (year % 400 == 0))) {

			sum=sum+1;
		}
		printf("%d年%d月%d日是一年中的第%d天", year, month, day,sum);



	return 0;
}