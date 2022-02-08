#include<stdio.h>
void input(float *base, float *height)
{
  printf("Enter the base value:");
  scanf("%f",base);
  printf("Enter the height value:");
  scanf("%f",height);
}
void find_area(float base , float height, float *area)
{
  *area=0.5*base*height;
}
void output(float base, float height, float area)
{
  printf("The area of the triangle with base %f and height %f is %f",base,height,area);
}
int main()
{ 
  float base,height,area;
  input(&base,&height);
  find_area(base,height,&area);
  output(base,height,area);
  return 0;
}
