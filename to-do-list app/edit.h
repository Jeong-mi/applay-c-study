#ifndef EDIT_H //""안에있는게정의되어있지않을때 안에값이 실행됨
#define EDIT_H

#include <stdio.h>
#include <string.h>
#include "task.h"


void addTask(struct Task* task);
void removeTask(struct Task* task);
extern int lastIndex;


#endif