#include<stdio.h>
#include<iostream>
using namespace std;
int a[4]={1,2,3,4};
void swap(int a[],int m,int n){
	int k=a[m];
	a[m]=a[n];
	a[n]=k;
}
void qpl(int a[],int k,int m){
	if(k==m){//�����ȫ�������飬��ʼ����ĩβ��˵���Ѿ�������һ�ֽ�����������
		for(int i=0;i<=k;i++){
			cout<<a[i]<<" ";
		}
		cout<<endl;
	}
	else{
		for(int i=k;i<=m;i++){
			swap(a,i,k);//������ǰԪ����iλ�õ�Ԫ��
			qpl(a,k+1,m);//�Ե�ǰԪ��֮���Ԫ�ؽ���ȫ����
			swap(a,i,k);//����
		}
	}
}
int main(){
	qpl(a,0,3); //diao yong fuction(qpl)
	return 0;
}
