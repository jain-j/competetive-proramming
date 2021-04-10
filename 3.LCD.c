#include<stdio.h>
#define MAX 1000
void print(char table[][MAX],char c,int s,int x){
	int row,cul;
	for(cul=x;cul<=x+s+1;cul++)
		for(row=0;row<=2*s+2;row++)
			if(cul==x||cul==x+s+1)
				if((row>=1&&row<=s)||(row>=s+2&&row<=2*s+1))
					table[row][cul]='|';
				else
					table[row][cul]=' ';
			else
				if((row>=1&&row<=s)||(row>=s+2&&row<=2*s+1))
					table[row][cul]=' ';
				else
					table[row][cul]='-';
	switch(c){
	case '0':
		for(cul=x+1;cul<=x+s;cul++)
			table[s+1][cul]=' ';
		break;
	case '1':
		for(row=1;row<=2*s+2;row++)
			table[row][x]=' ';
		for(cul=x+1;cul<=x+s;cul++)
			table[0][cul]=table[s+1][cul]=table[2*s+2][cul]=' ';
		break;
	case '2':
		for(row=1;row<=s;row++)
			table[row][x]=' ';
		for(row=s+2;row<=2*s+1;row++)
			table[row][x+s+1]=' ';
		break;
	case '3':
		for(row=1;row<=2*s+1;row++)
			table[row][x]=' ';
		break;
	case '4':
		for(cul=x;cul<=x+s+1;cul++)
			table[0][cul]=table[2*s+2][cul]=' ';
		for(row=s+2;row<=2*s+1;row++)
			table[row][x]=' ';
		break;
	case '5':
		for(row=1;row<=s;row++)
			table[row][x+s+1]=' ';
		for(row=s+2;row<=2*s+1;row++)
			table[row][x]=' ';
		break;
	case '6':
		for(row=1;row<=s;row++)
			table[row][x+s+1]=' ';
		break;
	case '7':
		for(row=1;row<=2*s+1;row++)
			table[row][x]=' ';
		for(cul=x+1;cul<=x+s;cul++)
			table[s+1][cul]=table[2*s+2][cul]=' ';
		break;
	case '8':
		break;
	case '9':
		for(row=s+2;row<=2*s+1;row++)
			table[row][x]=' ';
		break;
	}
	for(row=0;row<=2*s+2;row++)
		table[row][x+s+2]=' ';
}
int main(){
	int s,i;
	char str[100];
	while(scanf("%d%s",&s,str)==2){
		if(s==0&&(str[0]=='0'&&str[1]=='\0'))
			break;
		char table[30][MAX];
		int row,cul=0;
		for(i=0;str[i]!='\0';i++){
			print(table,str[i],s,cul);
			cul+=s+3;
		}
		for(row=0,cul--;row<=2*s+2;row++)
			table[row][cul]='\0';
		for(i=0;i<=2*s+2;i++)
			printf("%s\n",table[i]);
		putchar('\n');
	}
	return 0;
}