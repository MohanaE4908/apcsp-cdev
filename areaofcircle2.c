#include <stdio.h>
#include <math.h>

// for testing only - do not change
void getTestInput(int argc, char* argv[], float* a, int* b)
{
  if (argc == 3) {
    sscanf(argv[1], "%f", a);
    sscanf(argv[2], "%d", b);
  } 
}



// add your areaOfCircle function here - it must NOT printf, instead it must
// return the result to be printed in main
int areaOfCircle(float radius)
{
  float area = radius* radius* (M_PI);
  return area;
}


int main(int argc,char* argv[])
{
  while(1)
    {
    float start;
    float end;

    printf("lowest radius in range:\n");
    scanf("%f", &start);
    if (start < 0)
    {
      printf("not valid\n");
    }
  
    

    printf("highest radius in range:\n");
    scanf("%f", &end);
    if (start >  end)
    {
      printf("not valid, try again\n");
    }
    

int reps = (end + 1 - start);
  float radius;
  float result;

  // for testing only - do not change
  getTestInput(argc, argv, &start, &reps);

  printf("calculating area of circle starting at %f, and ending at %f\n", &start, &end);
  
  // add your code below to call areaOfCircle function with values between
  // start and end
start = radius;

  for (float i = start; i < (end + 1); i++)
  {
    float result = areaOfCircle(i);
    printf("Area of the circle with a radius of %f is %f.\n", start + i, result);
  } 

   
}

}
