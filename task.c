#define _CRT_SECURE_NO_WARNINGS

#include <stdio.h>
#include <string.h>
#include "task.h"

int add_task(Task task[], int count){
	Task t;
	t.id = count + 1;
	printf("Gorev ismi: ");
	(void)scanf(" %[^\n]s", &t.name);
	t.is_done = 0;
	task[count] = t;
	return count + 1;
}

void list_tasks(Task task[], int count){
	for (int i = 0; i < count; i++) {
		printf("%-3d - %-100s [%s]\n", task[i].id, task[i].name,
			task[i].is_done ? "Tamamlandi" : "Yapilmadi");
	}
}

int delete_task(Task task[], int count, int id){
	for (int i = 0;i < count;++i) {
		if (task[i].id == id) {
			for (int j = i;j < count - 1;++j) {
				task[j] = task[j + 1];
			}
			return count - 1;
		}
	}
	return count;
}

void complete_taks(Task task[], int count, int id){
	for (int i = 0;i <= count;++i) {
		if (task[i].id == id) {
			task[i].is_done = 1;
		}
	}
}
