#include <stdio.h>
#include <unistd.h>
#include <pthread.h>
#include<stdlib.h>

// 2. Create a thread to sort given array of "n" integers using bubble sort. Main thread should print the result after sorting is completed.

struct array { 
          int *arr; 
	  int n; 
};

struct array a;

// step 1: implement thread function
int arr[]={45,40,55,5,16,26,90,101,37,80};
int n = sizeof(*(a.arr)) / sizeof(*(a.arr[0]));

void* sort_array(void *param)
{
   struct array *arr = (struct array*)param;
     printf("bubble sorting....\n");
      for (int i = 0; i < (a.n)-1; i++)
      {
         for (int j = 0; j < (a.n)-i-1; j++)
         {
              if (arr[j] > arr[j+1])
			  {
                 int temp = arr[j];
                  arr[j] = arr[j+1];
                  arr[j+1] = temp;
              }
          }
      }
   printf("thread fun.o/p... bubble sorted array: \n");
   for(int i=0; i < (a.n); i++)
      printf("%d ",arr[i]);
   printf("\n");
   sleep(1);
 }
	

int main() {
	int ret;
//	int arr[]={45,40,55,5,16,26,90,101,37,80};
	pthread_t t1;
	struct array a = { *(a.arr) , a.n };
	// step 2: call pthread_create()
	ret = pthread_create(&t1, NULL, sort_array, arr);
	printf("main witing for thread 1...\n");
	pthread_join(t1,NULL);
	printf("Main thread... result after bubble sorting: \n");
	int i;
	for(i = 0; i < (arr.n); i++)
	     printf("%d ",arr[i]);
	printf("\n");
	return 0;
}

