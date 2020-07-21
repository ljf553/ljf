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
	if(k==m){//如果待全排列数组，起始等于末尾，说明已经产生了一种结果，进行输出
		for(int i=0;i<=k;i++){
			cout<<a[i]<<" ";
		}
		cout<<endl;
	}
	else{
		for(int i=k;i<=m;i++){
			swap(a,i,k);//交换当前元素与i位置的元素
			qpl(a,k+1,m);//对当前元素之后的元素进行全排列
			swap(a,i,k);//回溯
		}
	}
}
int main(){
	qpl(a,0,3); //diao yong fuction(qpl)
	return 0;
}
