#include <stdio.h>

int main(){
	char S[100];
	
	sprintf(S,"%d",123);
	printf("%s\n",S);
	
	sprintf(S,"%5d",1234);
	printf("%s\n",S);
	
	sprintf(S,"%-5d",1234);
	printf("%s\n",S);
	
	sprintf(S,"%.2f",3.1415926);
	printf("%s\n",S);
	
	return 0;
}
