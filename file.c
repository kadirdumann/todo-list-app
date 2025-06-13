#define _CRT_SECURE_NO_WARNINGS

#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include "task.h"

int load_tasks(Task tasks[]){
	FILE *dosya = fopen("tasks.txt", "r");
	int count = 0;
	if (!dosya) return count;

	while (fscanf(dosya, "%d|%99[^|]|%d\n", &tasks[count].id, tasks[count].name, &tasks[count].is_done) == 3)
	{
		++count;
	}

	fclose(dosya);
	return count;
}

void save_tasks(Task tasks[], int count){
	FILE *dosya = fopen("tasks.txt", "w");
	for (int i = 0;i < count;++i) {
		fprintf(dosya, "%-4d | %-100s | %3d\n", tasks[i].id, tasks[i].name, tasks[i].is_done);
	}
	fclose(dosya);
}