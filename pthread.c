#include <stdio.h>
#include <stdlib.h>
#include <pthread.h>
int sum = 0;

typedef struct sum_arg{
	int limit;
	int result;
}struct_sum;

void* runnable(void *arg){
	int sum = 0;
	struct_sum *sum_st = (struct_sum *)arg;
	for (int i = 0; i <= sum_st->limit; i++)
		sum += i;
	sum_st->result = sum;
	pthread_exit(0);
}
int main(int argc,char** argv){

	int thread_count = argc - 1;
	pthread_t tid[thread_count];
	struct_sum args[thread_count];

	for (int i = 0; i < thread_count; i++){
		args[i].limit = atoi(argv[i + 1]);
		pthread_create(&tid[i], NULL, &runnable, &args[i]);
	}

	for (int i = 0; i < thread_count; i++){
		pthread_join(tid[i], NULL);
		printf("thread_id:[%d] Sum:[%d]\n", tid[i], args[i].result);
	}

	return 0;
}




