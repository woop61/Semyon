#include <stdio.h>
#include <math.h>

int main()
{
	
 setbuf(stdout, NULL);
 int a;
 int b;
 int komanda;
 int i;
 printf("Список команд: \n");
 printf("1.Сложение \n");
 printf("2.Вычитание \n");
 printf("3.Умножение \n");
 printf("4.Деление без остатка \n");
 printf("5.Сборс \n");
 printf("6.Выход \n");
 printf("введите желаемое действие:> ");
 scanf("%d", &komanda);
 if (komanda < 5)
 {
	 printf("введите первое число:> ");
	 scanf("%d",&a);
 }
i = 0;
while (komanda < 6)
{
	 if (komanda == 1) 
	 {
		 printf("введите второе число:> ");
		 scanf("%d", &b);
		 a = a + b;
		 i = 1;
		 printf("Ответ: %d\n", a);
		 printf("введите желаемое действие:> ");
		 scanf("%d", &komanda);
	 }
	 else
		 if (komanda == 2)
		 {
			 printf("введите второе число:> ");
			 scanf("%d", &b);
			 a = a - b;
			 i = 1;
			 printf("Ответ: %d\n", a);
			 printf("введите желаемое действие:> ");
			 scanf("%d", &komanda);
		 }
		 else 
			 if (komanda == 3)
			 {
				 printf("введите второе число:> ");
				 scanf("%b", &b);
				 a = a * b;
				 i = 1;
				 printf("Ответ: %d\n", a);
				 printf("введите желаемое действие:> ");
				 scanf("%d", &komanda);
			 }
			 else
				 if (komanda == 4)
				 {
					 printf("введите второе число:> ");
					 scanf("%d", &b);
					 i = 1;
					 a = a / b;
					 printf("Ответ: %d\n", a);
					 printf("введите желаемое действие:> ");
					 scanf("%d", &komanda);
				 }
				 else 
					 if (komanda == 5)
					 {
						 printf("Сброс выполнен \n");
						 a = 0;
						 i = 0;
						 printf("введите желаемое действие:> ");
						 scanf("%d", &komanda);
					 }
	 if (i == 0)
	 {
		 printf("введите первое число:> ");
		 scanf("%d", &a);
	 }
}

}