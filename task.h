#ifndef TASK_H
#define TASK_H

typedef struct {
    int id;
    char name[100];
    int is_done;
} Task;

int add_task(Task task[], int count);                   //Yeni g�rev ekler, g�rev say�s�n� 1 art�r�r.
void list_tasks(Task task[], int count);                //G�revleri ekrana listeler.
int delete_task(Task task[], int count, int id);        //Verilen ID'ye sahip g�revi siler, listeyi g�nceller.
void complete_taks(Task task[], int count, int id);     //G�revi tamamlanm�� olarak i�aretler.

#endif
