#ifndef FILE_H
#define FILE_H

#include"task.h"

// Dosyadan g�revleri y�kle
int load_tasks(Task tasks[]);

// G�revleri dosyaya kaydet
void save_tasks(Task tasks[], int count);

#endif