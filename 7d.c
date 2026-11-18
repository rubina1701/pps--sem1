#include <stdio.h>
int main()
{
    int A[5],key,i,s=0;

    printf("Enter 5 values");
    for(i=0;i<5;i++)
    scanf("%d", &A[i]);


    printf("Enter searching element");
    scanf("%d",&key);

    for(i=0;i<5;i++)
    {
        if(key==A[i])
        {
          s=1;
          printf("Element found at %d");
          break;
        }
    }
      if(s==0)

        printf("element is not available");
        return 0;

}
