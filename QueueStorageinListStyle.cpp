#include "pch.h"
#include <iostream>
#include<stdio.h>
#include"myqueue.h"
using namespace std;

int main()
{
	Queue q;
	initQueue(&q);

	for (char ch = 'a'; ch <= 'z'; ch++)
	{
		enQueue(&q, ch);
	}

	resetQueue(&q);
	while (!isQueueEmpty(&q))
		printf("%3c", deQueue(&q));
	clearQueue(&q);

	cout << endl;
	return 0;
}


