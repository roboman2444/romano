#include <stdio.h>
#include <stdlib.h>

int val[]={10000,9000,5000,4000,1000,900,500,400,100,90,50,40,10,9,5,4,1,0};
char * num[]={"Z","MZ","Q","MQ","M","CM","D","CD","C","XC","L","XL","X","IX","V","IV","I"};

void main(int argc, char ** argv){
	int m, z;
/*
	for(z = 0, m = atoi(argv[1]); val[z] && m; z++) if(val[z] <= m){
		m-=val[z];
		printf(num[z--]);
//		printf(num[z], m-=val[z--]);
	}
	printf("\n");
*/
	for(z=0,m=atoi(argv[1]);val[z]&&m;z++)if(val[z]<=m&&(m-=val[z])>=0)printf("%s%s",num[z--],m?"":"\n");
}
