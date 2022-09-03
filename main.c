#include <stdio.h>

void p1001(){
//	inteiro = int
//	inteiro = int = %d	

//	inteiro a, b, x
	int a, b, x;
	
//	leia(a)
//	leia() = scanf()
	scanf("%d", &a);
	scanf("%d", &b);
	
//	x = a + b
	x = a + b;

//	escreva("X = ", x)
//	"\n" pula linha
//	escreva = printf()
	printf("X = %d\n", x);
}

void p1002(){
	//	real = double = %lf
	double area, raio;
	scanf("%lf", &raio);
	area = 3.14159 * (raio * raio);
	printf("A = %.4lf\n", area);
}

void p1005(){
	double a, b, media;
	scanf("%lf%lf", &a, &b);
	media = (a * 3.5 + b * 7.5) / (3.5 + 7.5);
	printf("MEDIA = %.5lf\n", media);	
}

int main() {

	p1005();
	
	return 0;
}