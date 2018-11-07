#include <stdio.h>

int main(){
	char str[100];
	//取指定长度的字符串
	sscanf("Mcy456789","%3s",str);
	printf("%s\n",str);
	
	//格式化时间
	int Year,Month,Day,Hour,Minute,Second;
	sscanf("2018/11/7 15:21:45","%d/%d/%d %d:%d:%d",&Year,&Month,&Day,&Hour,&Minute,&Second);
	printf("%d-%d-%d %d:%d:%d\n",Year,Month,Day,Hour,Minute,Second); 
	
	//读入字符串
	sscanf("MMP2333","%s",str);
	printf("%s\n",str); 
	
	//*表示跳过此格式不输入
	int x;
	sscanf("12345MCY","%d%*s",&x);
	printf("%d\n",x); 
	sscanf("12345MCY","%*d%s",str);
	printf("%s\n",str);
	
	//取到指定字符为止的字符串
	sscanf("abcdefg","%[^d]",str);
	printf("%s\n",str); 
	sscanf("abcdefGhijk","%[^A-Z]",str);
	printf("%s\n",str);
	
	return 0; 
}
