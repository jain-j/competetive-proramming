#include<stdio.h>
#include<string.h>
int main(){
	int i,j,len;
	char text[1000];
	char ar[]="`1234567890-=QWERTYUIOP[]ASDFGHJKL;'\\ZXCVBNM,./";
	while(gets(text)){
		len=strlen(text);
		for(i=0; i<len; i++){
			if(text[i]!='`'&& text[i]!='Q'&&text[i]!='A'&&text[i]!='Z'){
				for(j=0; j<=46; j++){
					if(text[i]==' '){
						printf(" ");
						break;
					}
					if(text[i]==ar[j]){
						printf("%c",ar[j-1]); break;
					}
				}
			}
		}
		printf("\n");
	}
	return 0;
}