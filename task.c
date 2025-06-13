#define _CRT_SECURE_NO_WARNINGS

#include <stdio.h>
#include <string.h>
#include "task.h"

int add_task(Task task[], int count){
	Task t;
	t.id = count + 1;
	printf("Gorev ismi: ");
	(void)scanf(" %[^\n]s", t.name);
	t.is_done = 0;
	task[count] = t;
	return count + 1;
}

void list_tasks(Task task[], int count){
	for (int i = 0; i < count; i++) {
		printf("%d - %s [%s]\n", task[i].id, task[i].name,
			task[i].is_done ? "Tamamlandý" : "Yapýlmadý");
	}
}

int delete_task(Task task[], int count, int id){

}

void complete_taks(Task task[], int count, int id){

}
