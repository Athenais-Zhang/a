#include <stdio.h>
#include <stdlib.h>

#define MAXSIZE 100

typedef int ElemType;
typedef struct node{
	ElemType e[MAXSIZE];
	int top;
	int bottom;
}SqStack;

void InitStack(SqStack *S);
void Push(SqStack *S,ElemType e);
ElemType Pop(SqStack *S);

int main(void)
{
	ElemType data;
	int i=0;
	SqStack S;
	InitStack(&S);
	for(i=0;i<5;i++){
		scanf ("%d",&data);
		Push(&S,data);
	//	fflush(stdin);
	}
	for(i=0;i<5;i++){
		printf("%d\n",Pop(&S));
	}
	return 0;
}

void InitStack(SqStack *S){
	S->top=0;
	S->bottom=0;
}

void Push(SqStack *S,ElemType data){
	S->e[S->top++]=data;
}

ElemType Pop(SqStack *S){
	return S->e[--S->top];
}