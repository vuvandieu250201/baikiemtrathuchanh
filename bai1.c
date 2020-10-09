#include <stdio.h>
#include <stdlib.h>
int add(int a, int b){
	int tong = a+b;
	return tong;
}
int subtract(int a, int b){
	int hieu = a-b;
	return hieu;
}
int mutiply(int a, int b){
	int tich = a*b;
	return tich;
}
int devide(int a,int b){
	int thuong =a/b;
	return thuong;
}
	
int main(int argc, char *argv[]) {
	int a,b;
	int luachon;
	printf("hay chon (1-4)\n");
	printf("1.tinh tong hai so nguyen \n");
	printf("2.tinh hieu hai so nguyen \n");
	printf("3.tinh tich hai so nguyen \n");
	printf("4.tinh thuong hai so nguyen \n");
	scanf("%d", &luachon);
	switch(luachon){
		case 0: break;
		case 1:
			printf("nhap a va b \n");
			scanf("%d%d", &a,&b);
			printf("tong cua hai so la : %d+%d=%d",a,b,add(a,b));
			break;
		case 2:
			printf("nhap a va b \n");
			scanf("%d%d", &a,&b);
			printf("hieu cua hai so la : %d-%d=%d",a,b,subtract(a,b));
			break;
		case 3:
			printf("nhap a va b \n");
			scanf("%d%d", &a,&b);
			("tich cua hai so la : %d*%d=%d",a,b,mutiply(a,b));
			break;
		case 4:
			printf("nhap a va b \n");
			scanf("%d%d", &a,&b);
			printf("thuong cua hai so la :%d/%d=%d",a,b,devide(a,b));
			break;
	
	}
	
	return 0;
}


	


