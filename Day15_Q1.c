#include <stdio.h>
#include <unistd.h>
#include <pthread.h>
#include<stdlib.h>

//	Q1. Create a thread to sort given array of 10 integers using selection sort. Main thread should print the result after sorting is completed.

// step 1: implement thread function
int n = 10;
void* sort_array(void *param)
{
int *res;
   int *arr = (int*)param;
     printf("sorting....\n");
      for (int i = 0; i < n-1; i++)
      {
         for (int j = i+1; j < n; j++)
         {
              if (arr[i] > arr[j])
			  {
                 int temp = arr[i];
                  arr[i] = arr[j];
                  arr[j] = temp;
              }
          }
      }
   printf("thread fun.o/p... sorted array: \n");
   for(int i=0; i < n; i++)
      printf("%d ",arr[i]);
   printf("\n");
   sleep(1);
 }
	

int main() {
	int ret;
	int arr[10]={22,40,55,5,16,26,90,101,37,80};
	pthread_t t1;
	// step 2: call pthread_create()
	ret = pthread_create(&t1, NULL, sort_array, arr);
	printf("main witing for thread 1...\n");
	pthread_join(t1,NULL);
	printf("Main thread... result after sorting: \n");
	int i;
	for(i = 0; i < n; i++)
	     printf("%d ",arr[i]);
	printf("\n");
	return 0;
}

