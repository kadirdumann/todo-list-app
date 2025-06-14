#define _CRT_SECURE_NO_WARNINGS

#include <stdio.h>
#include "task.h"
#include "file.h"


int main() {
	Task tasks[100];						// 100 görevlik liste 
	int choise, id;
	int count = load_tasks(tasks);			// kaç görev olduðunu gösteren deðiþken

	do
	{
		printf("1-\tAdd\n2-\tDelete\n3-\tList\n4-\tComplete\n5-\tExit\n\n Choise: ");
		(void)scanf("%d", &choise);

		switch (choise)
		{
			case 1:
				count = add_task(tasks, count);
				save_tasks(tasks, count);
				break;
			case 2:
				printf("\nSil\n\n");
				break;
			case 3:
				list_tasks(tasks, count);
				break;
			case 4:
				printf("\nTamamla\n\n");
				break;
			default:
				break;
		} 
	} while (choise != 5);
	return 0;

}