#include <stdio.h>

int main(){
	char str[100];
	//ȡָ�����ȵ��ַ���
	sscanf("Mcy456789","%3s",str);
	printf("%s\n",str);
	
	//��ʽ��ʱ��
	int Year,Month,Day,Hour,Minute,Second;
	sscanf("2018/11/7 15:21:45","%d/%d/%d %d:%d:%d",&Year,&Month,&Day,&Hour,&Minute,&Second);
	printf("%d-%d-%d %d:%d:%d\n",Year,Month,Day,Hour,Minute,Second); 
	
	//�����ַ���
	sscanf("MMP2333","%s",str);
	printf("%s\n",str); 
	
	//*��ʾ�����˸�ʽ������
	int x;
	sscanf("12345MCY","%d%*s",&x);
	printf("%d\n",x); 
	sscanf("12345MCY","%*d%s",str);
	printf("%s\n",str);
	
	//ȡ��ָ���ַ�Ϊֹ���ַ���
	sscanf("abcdefg","%[^d]",str);
	printf("%s\n",str); 
	sscanf("abcdefGhijk","%[^A-Z]",str);
	printf("%s\n",str);
	
	return 0; 
}
