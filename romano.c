#include <stdio.h>
#include <string.h>

int val[] = {10000,5000,1000,500,100,50,10,5,1,10000,5000,1000,500,100,50,10,5,1,0};
char num[] = "ZQMDCLXVIzqmdclxvi";

void main(int argc, char ** argv){
	int i, z, v = 0, m = 0;
	char *s = argv[1];
	for(i = strlen(s); i >= 0; i--){
		for(z = 0; val[z] && num[z] != s[i]; z++);
		if(val[z] < m) v -= val[z];
		else v += m = val[z];
	}
	printf("%i\n", v);
}
