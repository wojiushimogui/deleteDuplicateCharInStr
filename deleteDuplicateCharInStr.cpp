/*
�Ƴ��ַ������ظ����ַ���
��abcadc�Ƴ����Ϊabcd��
���Զ��ⶨ��һ��������������������⿪��һ�����顣
*/

#include<stdio.h>
#include<string.h>

void deleteDuplicateCharInStr(char *str){
	int len=strlen(str);
	if(len<2){//����С�� 2��˵�����ַ�������ֻ��һ���ַ������һ��û���ظ��ַ� 
		return;
	} 
	int p=0;//�������� i�� 
	for(int i=0;i<len;i++){
		if(str[i]!='\0'){
			//�����ǰ�ַ���Ϊ'\0'ʱ��pһֱ��i��ȣ�  
            //�����ǰ�ַ�Ϊ'\0'����p��С��i���Ӷ��ú�����ַ������ǰ��'\0'�ַ���λ��
			str[p++]=str[i];
			for(int j=i+1;j<len;j++){
				if(str[j]==str[i]){//�������ظ����ַ�ȫ�� '\0'�滻 
					str[j]='\0';
				}
			}
		}
	}
	str[p]='\0';//��ѭ��������Ϊ�ַ����ĺ��油�� '\0',����֤�ַ�������'\0'��β 
	
}

int main(void){
	char str[1000];
	gets(str);
	deleteDuplicateCharInStr(str);
	puts(str); 
	return 0;
}

