#include<stdio.h>
#include<string.h>
int main(){
	char s[30];
	int i, b, n, dem;
	printf("nhap xau ki tu s: ");get(s);
	n = strlen(s);
	for(i = 0, dem = 0; i < n; i++){
		if(s[i] == 'A' || s[i] == 'a'){
			dem++;
			s[i] = 'B';
		}
	}
		printf("trong xau co %d kí tu 'a' và 'A'", dem);
		printf("thay 'a', 'A' = 'B'xau moi: %s", s);
		return 0;
}
int main(){
	char s[30], s1[30], s2[30];
	int n, i;
	printf("nhap xau :\t");get(s);
	n = strlen(s);
	for(i = 0; i < n; i++){
		if()
	}
	
}
