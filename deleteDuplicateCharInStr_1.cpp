/*
�Ƴ��ַ������ظ����ַ����ַ�����Сд��ĸ���� 
��abcadc�Ƴ����Ϊabcd��
Ҫ��ʱ�临�ӶȾ�����С 

˼·��Ҫ��ʱ�临�ӶȾ�����С���Կռ�û�����ƣ������Ҫ�����ÿؼ���ȡʱ�� 
*/

#include<stdio.h>
#include<string.h>

void deleteDuplicateCharInStr_1(char *str){
	
	int len=strlen(str);
	if(len<2){
		return;
	}
	int count[26];//������¼�ַ��Ƿ��Ѿ����ֹ� ��ֻΪ0��ʾû�и��ַ���ĿǰΪֹ�����ֹ� 
	for(int i=0;i<26;i++){
		count[i]=0;
	} 
	int p=0;//
	for(int i=0;i<len;i++){
		
		if(0==count[str[i]-'a']){//���str[i]�Ƿ��Ѿ����ֹ�   
            //���ַ��������ظ����ַ�ʱ����p��С��i���Ӷ��ú�����ַ�������ظ��ַ���ռ��λ��
			str[p++]=str[i];
			count[str[i]-'a']=1;//count�����е�Ԫ��Ϊ 1 ��˵����Ԫ�����Ѿ�������һ�Σ�������ֵĶ�Ϊ�ظ��ġ� 
			
		}
	}
	
	str[p]='\0';//��֤ȥ���ظ����ַ���  ����'\0'��β 
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


