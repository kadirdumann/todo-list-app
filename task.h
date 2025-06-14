#ifndef TASK_H
#define TASK_H

typedef struct {
    int id;
    char name[100];
    int is_done;
} Task;

int add_task(Task task[], int count);                   //Yeni görev ekler, görev sayısını 1 artırır.
void list_tasks(Task task[], int count);                //Görevleri ekrana listeler.
int delete_task(Task task[], int count, int id);        //Verilen ID'ye sahip görevi siler, listeyi günceller.
void complete_taks(Task task[], int count, int id);     //Görevi tamamlanmış olarak işaretler.

#endif
