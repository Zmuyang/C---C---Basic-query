#include <stdio.h>
#include <math.h> 
#include <string.h> // memset()

typedef long long LL; //用 LL 代替 long long
const double pi=acos(-1.0);
 
// INF1 == INF2  都为无穷大 
const int INF1 = (1 << 30) -1;
const int INF2 = 0x3fffffff;

int arr[1000000]; // 如果数组大小较大，应定义在主函数外面 1e6 

// &在形参中是引用，对引用变量的操作就是对原变量的操作 ， 类似于指针 
int Ex(int &x){ 
	
}
/* 
struct EXAMPLE{
	int i;
	char c;
	//定义多个构造函数，适应不同的初始化要求 
	EXAMPLE(int _i) : i(_i) {}   
	EXAMPLE(int _i,char _c){
		i=_i;
		c=_c;
	}
}; 
EXAMPLE exa = EXAMPLE(1,'m'); // 初始化  */ 

int main(){
	double x,p;
	int n; 
	char str1[10]="mcy"; 
	char str2[10]="Zmy"; 
	fabs(x); // 对 double 型变量取绝对值
	floor(x); //对 double 型变量向下取整 
	ceil(x);  // 对 double 型变量向上取整 
	pow(x,p); // 返回 r 的 p 次幂 ，double 
	sqrt(x); // 算术平方根 double
	log(x); //返回以 e 为底的对数
	sin(x);
	cos(x);
	tan(x); 
/*	
	memset(arr,0,sizeof(arr)); // 0 或 -1 用 memset  */ 
	double r = round(x); // 四舍五入 
/*
	printf("%d",(int)r);  // 输出用 int 强制取整   */
	strlen(str); // 得到第一个 '\0' 前的个数 
	strcmp(str1,str2); // 返回两个字符串大小的比较结果，按字典序
	strcpy(str1,str2); //把 str2 复制给 str1
	strcat(str1,str2); //把 str2 接到 str1 后面  
	return 0;
}
