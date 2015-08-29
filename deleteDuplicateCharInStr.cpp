/*
移除字符串中重复的字符，
如abcadc移除后变为abcd，
可以额外定义一两个变量，但不允许额外开辟一个数组。
*/

#include<stdio.h>
#include<string.h>

void deleteDuplicateCharInStr(char *str){
	int len=strlen(str);
	if(len<2){//长度小于 2，说明，字符串至多只有一个字符，因此一定没有重复字符 
		return;
	} 
	int p=0;//用来跟踪 i， 
	for(int i=0;i<len;i++){
		if(str[i]!='\0'){
			//如果当前字符不为'\0'时，p一直与i相等，  
            //如果当前字符为'\0'，则p会小于i，从而用后面的字符来填充前面'\0'字符的位置
			str[p++]=str[i];
			for(int j=i+1;j<len;j++){
				if(str[j]==str[i]){//将后面重复的字符全部 '\0'替换 
					str[j]='\0';
				}
			}
		}
	}
	str[p]='\0';//当循环结束后，为字符串的后面补上 '\0',即保证字符串是以'\0'结尾 
	
}

int main(void){
	char str[1000];
	gets(str);
	deleteDuplicateCharInStr(str);
	puts(str); 
	return 0;
}

