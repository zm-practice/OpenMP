#include<stdio.h>
#include<omp.h>
int main()
{
    int i=0;
    #pragma omp parallel
    {
        #pragma omp sections lastprivate(i) 
        {
            #pragma omp section
            {
                printf("%d\n",i);
            }
            #pragma omp section
            {
                i+=1;
               printf("%d\n",i);
            }
        }
    }
    printf("%d\n",i);
    return 0;
}