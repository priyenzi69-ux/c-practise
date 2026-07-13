/* Program for float operators*/
# include <stdio.h>
# include <conio.h>
void main()
{
  float int a, b, mod;
float sum, sub, mul, div, mod;
clrscr();
printf("Enter the value of a and b");
scanf("%d%d", &a, &b);
sum = a + b;
sub = a - b;
mul = a * b;
div = a / b;
mod = a % b;
printf("\n sum=%f", sum);
printf("\n sub=%f", sub);
printf("\n mul=%f", mul);
printf("\n div=%f", div);
printf("\n mod=%f", mod);
getch();
}
