#include <stdio.h>
#include <math.h> 
#include <string.h> // memset()

typedef long long LL; //�� LL ���� long long
const double pi=acos(-1.0);
 
// INF1 == INF2  ��Ϊ����� 
const int INF1 = (1 << 30) -1;
const int INF2 = 0x3fffffff;

int arr[1000000]; // ��������С�ϴ�Ӧ���������������� 1e6 

// &���β��������ã������ñ����Ĳ������Ƕ�ԭ�����Ĳ��� �� ������ָ�� 
int Ex(int &x){ 
	
}
/* 
struct EXAMPLE{
	int i;
	char c;
	//���������캯������Ӧ��ͬ�ĳ�ʼ��Ҫ�� 
	EXAMPLE(int _i) : i(_i) {}   
	EXAMPLE(int _i,char _c){
		i=_i;
		c=_c;
	}
}; 
EXAMPLE exa = EXAMPLE(1,'m'); // ��ʼ��  */ 

int main(){
	double x,p;
	int n; 
	char str1[10]="mcy"; 
	char str2[10]="Zmy"; 
	fabs(x); // �� double �ͱ���ȡ����ֵ
	floor(x); //�� double �ͱ�������ȡ�� 
	ceil(x);  // �� double �ͱ�������ȡ�� 
	pow(x,p); // ���� r �� p ���� ��double 
	sqrt(x); // ����ƽ���� double
	log(x); //������ e Ϊ�׵Ķ���
	sin(x);
	cos(x);
	tan(x); 
/*	
	memset(arr,0,sizeof(arr)); // 0 �� -1 �� memset  */ 
	double r = round(x); // �������� 
/*
	printf("%d",(int)r);  // ����� int ǿ��ȡ��   */
	strlen(str); // �õ���һ�� '\0' ǰ�ĸ��� 
	strcmp(str1,str2); // ���������ַ�����С�ıȽϽ�������ֵ���
	strcpy(str1,str2); //�� str2 ���Ƹ� str1
	strcat(str1,str2); //�� str2 �ӵ� str1 ����  
	return 0;
}
