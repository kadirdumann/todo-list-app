#ifndef FILE_H
#define FILE_H

#include"task.h"

// Dosyadan görevleri yükle
int load_tasks(Task tasks[]);

// Görevleri dosyaya kaydet
void save_tasks(Task tasks[], int count);

#endif