#include<stdio.h>
#include<math.h>
#include<stdlib.h>
struct complex{
	int real;
	int img;
};
struct complex*createi(int,int);
struct complex*elementi();
struct complex*addi(struct complex*,struct complex*);
struct complex*subi(struct complex*,struct complex*);
struct complex*muli(struct complex*,struct complex*);
void printi(struct complex*);
void i();
struct vector{
	int x;
	int y;
	int z;
};
struct vector*elementv();
struct vector*addv(struct vector*,struct vector*);
struct vector*subv(struct vector*,struct vector*);
struct vector*dotv(struct vector*,struct vector*);
struct vector*crossv(struct vector*,struct vector*);
void printv(struct vector*);
void vectorcalc();
void aricalc();
void matcalc();
int** create2D(int,int);
int** elements2D(int**,int,int);
void print2D(int**,int,int);
void add2D(int**,int**,int,int,int,int);
void sub2D(int**,int**,int,int,int,int);
void mul2D(int**,int**,int,int,int,int);
void diagonal(int**,int,int);
void adder(int**,int,int);
int main(){
	char o;
	printf("Import Calculator\n[a for arithmetic calculator]\n[m for matrix calculator]\n[v for vector calculator]\n[i for complex calculator]\n:- ");scanf(" %c",&o);
	switch(o){
		case 'a':
			aricalc();
			break;
		case 'm':
			matcalc();
			break;
		case 'v':
			vectorcalc();
			break;
		case 'i':
			i();
			break;
		default:
			printf("Invalid Operation");
			break;
	}
	return 0;
}
void aricalc(){
	float a,b;
	int i,j;
	int k;
	char c;
	printf("Enter Operation to perform\n[+ for addition]\n[- for subtraction]\n[* for multiplication]\n[/ for division]\n[%% for remainder]\n[^ for power]\n:- ");scanf(" %c",&c);
	switch(c){
		case '+':
			printf("Enter 1st No: ");scanf("%f",&a);
			printf("Enter 2nd No: ");scanf("%f",&b);
			printf("%f %c %f = %f",a,c,b,a+b);
			break;
		case '-':
			printf("Enter 1st No: ");scanf("%f",&a);
			printf("Enter 2nd No: ");scanf("%f",&b);
			printf("%f %c %f = %f",a,c,b,a-b);
			break;
		case '*':
			printf("Enter 1st No: ");scanf("%f",&a);
			printf("Enter 2nd No: ");scanf("%f",&b);
			printf("%f %c %f = %f",a,c,b,a*b);
			break;
		case '/':
			printf("Enter 1st No: ");scanf("%f",&a);
			printf("Enter 2nd No: ");scanf("%f",&b);
			printf("%f %c %f = %f",a,c,b,a/b);
			break;
		case '%':
			printf("Enter 1st No: ");scanf("%d",&i);
			printf("Enter 2nd No: ");scanf("%d",&j);
			printf("%d %c %d = %d",i,c,j,i%j);
			break;
		case '^':
			printf("Enter 1st No: ");scanf("%f",&a);
			printf("Enter 2nd No: ");scanf("%f",&b);
			printf("%f %c %f = %f",a,c,b,pow(a,b));
			break;
		default:
			printf("Invalid Operation");
	}
}
void matcalc(){
	char o;
	int** A;
	int** B;
	int a,b,c,d;
	printf("Operation to perform\n[+ for addition]\n[-for subtraction]\n[* for multiplication]\n[^ for sum of all elements]\n[# for sum of diagonal elements]\n:- ");scanf(" %c",&o);
	switch(o){
		case '#':
			printf("Number of rows of the matrix: ");scanf("%d",&a);
			printf("Number of columns of the matrix: ");scanf("%d",&b);
			A=create2D(a,b);
			A=elements2D(A,a,b);
			printf("A=\n");
			print2D(A,a,b);
			diagonal(A,a,b);
			break;
		case '+':
			printf("Number of rows of 1st matrix: ");scanf("%d",&a);
			printf("Number of columns of 1st matrix: ");scanf("%d",&b);
			A=create2D(a,b);
			A=elements2D(A,a,b);
			printf("A=\n");
			print2D(A,a,b);
			printf("Number of rows of 2nd matrix: ");scanf("%d",&c);
			printf("Number of columns of 2nd matrix: ");scanf("%d",&d);
			B=create2D(c,d);
			B=elements2D(B,c,d);
			printf("B=\n");
			print2D(B,c,d);
			add2D(A,B,a,b,c,d);
			break;
		case '-':
			printf("Number of rows of 1st matrix: ");scanf("%d",&a);
			printf("Number of columns of 1st matrix: ");scanf("%d",&b);
			A=create2D(a,b);
			A=elements2D(A,a,b);
			printf("A=\n");
			print2D(A,a,b);
			printf("Number of rows of 2nd matrix: ");scanf("%d",&c);
			printf("Number of columns of 2nd matrix: ");scanf("%d",&d);
			B=create2D(c,d);
			B=elements2D(B,c,d);
			printf("B=\n");
			print2D(B,c,d);
			sub2D(A,B,a,b,c,d);
			break;
		case '*':
			printf("Number of rows of 1st matrix: ");scanf("%d",&a);
			printf("Number of columns of 1st matrix: ");scanf("%d",&b);
			A=create2D(a,b);
			A=elements2D(A,a,b);
			printf("A=\n");
			print2D(A,a,b);
			printf("Number of rows of 2nd matrix: ");scanf("%d",&c);
			printf("Number of columns of 2nd matrix: ");scanf("%d",&d);
			B=create2D(c,d);
			B=elements2D(B,c,d);
			printf("B=\n");
			print2D(B,c,d);
			mul2D(A,B,a,b,c,d);
			break;
		case '^':
			printf("Number of rows of the matrix: ");scanf("%d",&a);
			printf("Number of columns of the matrix: ");scanf("%d",&b);
			A=create2D(a,b);
			A=elements2D(A,a,b);
			printf("A=\n");
			print2D(A,a,b);
			adder(A,a,b);
			break;
		default:
			printf("Invalid operation");
			break;
	}
}
void diagonal(int** A,int a,int b){
	int i,j;
	int k=0;
	for(i=0;i<a;i++){
		for(j=0;j<b;j++){
			if(i==j){
				k=k+A[i][j];
			}
		}
	}
	printf("Sum of diagonal elements: %d",k);
}
int** create2D(int a,int b){
	int i,j;
	int** temp=(int**)malloc(sizeof(int*));
	for(i=0;i<a;i++){
		temp[i]=(int*)malloc(sizeof(int));
		for(j=0;j<b;j++){
			temp[i][j]=0;
		}
	}
	return temp;
}
int** elements2D(int**A,int a,int b){
	int i,j;
	for(i=0;i<a;i++){
		for(j=0;j<b;j++){
			printf("Element at index %d %d: ",i+1,j+1);scanf("%d",&A[i][j]);
		}
	}
	return A;
}
void print2D(int** A,int a,int b){
	int i,j;
	for(i=0;i<a;i++){
		for(j=0;j<b;j++){
			printf("%d\t",A[i][j]);
		}
		printf("\n");
	}
}
void add2D(int** A,int** B,int a,int b,int c,int d){
	int i,j;
	if(a==c&&b==d){
		int**C=create2D(a,b);
		for(i=0;i<a;i++){
			for(j=0;j<b;j++){
				C[i][j]=A[i][j]+B[i][j];
			}
		}
	printf("After addition: \n");
	print2D(C,a,b);
	}
	else{
		printf("Addition isn't possible\n");
	}
}
void sub2D(int** A,int** B,int a,int b,int c,int d){
	int i,j;
	if(a==c&&b==d){
		int**C=create2D(a,b);
		for(i=0;i<a;i++){
			for(j=0;j<b;j++){
				C[i][j]=A[i][j]-B[i][j];
			}
		}
	printf("After Subtraction: \n");
	print2D(C,a,b);
	}
	else{
		printf("Subtraction isn't possible\n");
	}
}
void mul2D(int** A,int** B,int a,int b,int c,int d){
	int i,j,k;
	if(b==c){
		int** C=create2D(a,d);
		for(i=0;i<a;i++){
			for(j=0;j<d;j++){
				for(k=0;k<c;k++){
					C[i][j]+=(A[i][k]*B[k][j]);
				}
			}
		}
		printf("After Multiplication: \n");
		print2D(C,a,d);
	}
	else{
		printf("Multiplication isn't possible\n");
	}
}
void adder(int**A,int a,int b){
	int sum=0;
	int i,j;
	for(i=0;i<a;i++){
		for(j=0;j<b;j++){
			sum=sum+A[i][j];
		}
	}
	printf("Sum of all elements is %d",sum);
}
void vectorcalc(){
	struct vector*A;
	struct vector*B;
	struct vector*C;
	char o;
	printf("Operation to perform\n[+ for addition]\n[- for subtraction]\n[. for dot product]\n[* for cross product]\n:- ");scanf(" %c",&o);
	switch(o){
		case '+':
			printf("1st Vector:\n");
			A=elementv();
			printf("A=\n");
			printv(A);
			printf("2nd Vector:\n");
			B=elementv();
			printf("B=\n");
			printv(B);
			C=addv(A,B);
			printf("After addition: \n");
			printv(C);
			break;
		case '-':
			printf("1st Vector:\n");
			A=elementv();
			printf("A=\n");
			printv(A);
			printf("2nd Vector:\n");
			B=elementv();
			printf("B=\n");
			printv(B);
			C=subv(A,B);
			printf("After subtraction: \n");
			printv(C);
			break;
		case '.':
			printf("1st Vector:\n");
			A=elementv();
			printf("A=\n");
			printv(A);
			printf("2nd Vector:\n");
			B=elementv();
			printf("B=\n");
			printv(B);
			C=dotv(A,B);
			printf("After dot product: \n");
			printv(C);
			break;
		case '*':
			printf("1st Vector:\n");
			A=elementv();
			printf("A=\n");
			printv(A);
			printf("2nd Vector:\n");
			B=elementv();
			printf("B=\n");
			printv(B);
			C=crossv(A,B);
			printf("After cross product: \n");
			printv(C);
			break;
		default:
			printf("Invalid Operation");
			break;
	}
}
struct vector*elementv(){
	int a,b,c;
	struct vector*temp=(struct vector*)malloc(sizeof(struct vector));
	printf("X component: ");scanf("%d",&a);
	printf("Y component: ");scanf("%d",&b);
	printf("Z component: ");scanf("%d",&c);
	temp->x=a;
	temp->y=b;
	temp->z=c;
	return temp;
}
void printv(struct vector*a){
	printf("%di+%dj+%dk\n",a->x,a->y,a->z);
}
struct vector*addv(struct vector* a,struct vector* b){
	struct vector*result=(struct vector*)malloc(sizeof(struct vector));
	result->x=a->x+b->x;
	result->y=a->y+b->y;
	result->z=a->z+b->z;
	return result;
}
struct vector*subv(struct vector* a,struct vector* b){
	struct vector*result=(struct vector*)malloc(sizeof(struct vector));
	result->x=a->x-b->x;
	result->y=a->y-b->y;
	result->z=a->z-b->z;
	return result;
}
struct vector*dotv(struct vector* a,struct vector* b){
	struct vector*result=(struct vector*)malloc(sizeof(struct vector));
	result->x=a->x*b->x;
	result->y=a->y*b->y;
	result->z=a->z*b->z;
	return result;
}
struct vector*crossv(struct vector*a,struct vector*b){
	struct vector*result=(struct vector*)malloc(sizeof(struct vector));
	result->x=(a->y*b->z)-(a->z*b->y);
	result->y=(a->x*b->z)-(a->z*b->x);
	result->z=(a->x*b->y)-(a->y*b->x);
	return result;
}
void i(){
	char o;
	struct complex*A;
	struct complex*B;
	struct complex*C;
	printf("Operation to perform\n[+ for addition]\n[-for subtraction]\n[* for multiplication]\n:- ");scanf(" %c",&o);
	switch(o){
		case '+':
			printf("1st Complex:\n");
			A=elementi();
			printf("A=\n");
			printi(A);
			printf("2nd Complex:\n");
			B=elementi();
			printf("B=\n");
			printi(B);
			C=addi(A,B);
			printf("After addition:\n");
			printi(C);
			break;
		case '-':
			printf("1st Complex:\n");
			A=elementi();
			printf("A=\n");
			printi(A);
			printf("2nd Complex:\n");
			B=elementi();
			printf("B=\n");
			printi(B);
			C=subi(A,B);
			printf("After subtraction:\n");
			printi(C);
			break;
		case '*':
			printf("1st Complex:\n");
			A=elementi();
			printf("A=\n");
			printi(A);
			printf("2nd Complex:\n");
			B=elementi();
			printf("B=\n");
			printi(B);
			C=muli(A,B);
			printf("After multiplication:\n");
			printi(C);
			break;
		default:
			printf("Invalid Operation");
			break;
	}
	
}
struct complex*elementi(){
	struct complex*a=(struct complex*)malloc(sizeof(struct complex));
	int i,j;
	printf("Real Part: ");scanf("%d",&i);
	printf("Imaginary Part: ");scanf("%d",&j);
	a->real=i;
	a->img=j;
	return a;
}
void printi(struct complex a) {
    if (a.img >= 0)
        printf("%d+%di\n", a.real, a.img);
    else
        printf("%d%di\n", a.real, a.img);
}
struct complex*addi(struct complex*a,struct complex*b){
	struct complex* result=(struct complex*)malloc(sizeof(struct complex));
	result->img=a->img+b->img;
	result->real=a->real+b->real;
	return result;
}
struct complex*subi(struct complex*a,struct complex*b){
	struct complex* result=(struct complex*)malloc(sizeof(struct complex));
	result->img=a->img-b->img;
	result->real=a->real-b->real;
	return result;
}
struct complex*muli(struct complex*a,struct complex*b){
	struct complex* result=(struct complex*)malloc(sizeof(struct complex));
	result->img=(a->real*b->img)+(a->img*b->real);
	result->real=(a->real*b->real)-(a->img*b->img);
	return result;
}
