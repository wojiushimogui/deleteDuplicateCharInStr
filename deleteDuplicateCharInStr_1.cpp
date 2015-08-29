/*
移除字符串中重复的字符，字符串由小写字母构成 
如abcadc移除后变为abcd，
要求：时间复杂度尽可能小 

思路：要求时间复杂度尽可能小而对空间没有限制，这就需要我们用控件换取时间 
*/

#include<stdio.h>
#include<string.h>

void deleteDuplicateCharInStr_1(char *str){
	
	int len=strlen(str);
	if(len<2){
		return;
	}
	int count[26];//用来记录字符是否已经出现过 ，只为0表示没有该字符到目前为止还出现过 
	for(int i=0;i<26;i++){
		count[i]=0;
	} 
	int p=0;//
	for(int i=0;i<len;i++){
		
		if(0==count[str[i]-'a']){//检查str[i]是否已经出现过   
            //当字符串中有重复的字符时，则p会小于i，从而用后面的字符来填充重复字符所占的位置
			str[p++]=str[i];
			count[str[i]-'a']=1;//count数组中的元素为 1 ，说明此元素在已经出现了一次，后面出现的都为重复的。 
			
		}
	}
	
	str[p]='\0';//保证去掉重复的字符后  是以'\0'结尾 
}
int main(void){
	char str[1000];
	gets(str);
	while(1){
		deleteDuplicateCharInStr_1(str);
		puts(str);
		gets(str);
		
	}
	
	
	return 0;
} 


