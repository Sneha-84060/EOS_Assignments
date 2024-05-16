#include<stdio.h>
#include<sys/wait.h>
#include<fcntl.h>
#include<unistd.h>
#include<string.h>


int main(){

int ret, res, arr1[2], arr2[2], n1, n2, s;
printf("...... Parent Started.......!!\n");
ret = pipe(arr1);
ret = pipe(arr2);

if(ret < 0) {
		perror("pipe() failed");
		_exit(3);
	}

ret = fork();

if(ret == 0){ // child
close(arr1 [0]);
close(arr2 [1]);

printf("Enter 2 no.s: \n");
scanf("%d %d", &n1, &n2);

ret = write(arr1 [1], &n1, sizeof(n1));
ret = write(arr1 [1], &n2, sizeof(n2));

ret = read(arr2 [0], &res, sizeof(res));
printf("Addition of %d and %d : %d\n",n1, n2, res);

close(arr2 [0]);
close(arr1 [1]);
printf("...... child completed........\n");
}


else { //parent
close(arr1 [1]);
close(arr2 [0]);
printf("...... parent waiting for data .......\n");
ret = read(arr1 [0], &n1, sizeof(n1));
ret = read(arr1 [0], &n2, sizeof(n2));
printf("...... Numbers received......\n");

res = n1 + n2;

ret = write(arr2 [1], &res, sizeof(res));

close(arr2 [1]);
close(arr1 [0]);

waitpid(-1, &s, 0);
printf("...... Parent completed.........\n");
}

return 0;
}
