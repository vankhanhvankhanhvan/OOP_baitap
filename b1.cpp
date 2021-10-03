//cap phat dong va lam viec vôi mang bang con tro
#include<iostream>
#include<stdio.h>
#include<time.h>
#include<stdlib.h>
using namespace std;

int main(){
	int n;
	cout<<"Nhap n=";
	cin>>n;
	int *p;
	p=new int[n];
	srand((unsigned)time(NULL));
	for(int i=0;i<n;i++){
		*(p+i)=rand()%99+1;
	}
	for(int i=0;i<n;i++){
	cout<<*(p+i)<<"\t";
	}
	delete(p);
	/*int n;
	cout<<"Nhap n=";
	cin>>n;
	int *p;
	p=new int[n];
	
	for(int i=0; i<n;i++){
		cout<<"Nhap phan tu thu "<<i<<endl;
		cin>>*(p+i);
	}
	for(int i=0;i<n-1;i++){
		for(int j=i+1;j<n;j++){
			if(*(p+i)>*(p+j)){
				swap(*(p+i),*(p+j));
		}
	}
	}
	for(int i=0;i<n;i++){
		cout<<*(p+i)<<"\t";
	}
	// cap phat dong trong C
	//p=(int*)malloc(sizeof(int));
	//free(p);
	//Cap phat dong trong C++
	delete (p);*/
	return 0;
	}
/*	srand((unsigned)time(NULL));
	for(int i=0;i<n;i++){
		*(p+i)=rand()%99+1;
		}*/
		
	//Hello
