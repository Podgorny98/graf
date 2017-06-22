#include <stdio.h>

enum {GRAF_SIZE = 10};									//размер графа

////////////////////////////////////////////////////////////////////////
	// Состояния вершин:
	// 0 - не посещена 
	// 1 - посещена
////////////////////////////////////////////////////////////////////////

void passing(int cur_node);

int matrix[GRAF_SIZE][GRAF_SIZE];				// матрица смежности, задающая граф
int node_status[GRAF_SIZE] = {};				// показывает состояние вершины, сначала все вершины 0


int main()
{
	return 0;
}

void passing(int cur_node) {
	node_status[cur_node] = 1;					//помечаем текущую вершину как пройденную */
	for (int i = 0; i < GRAF_SIZE; i++) {
		if(!node_status[i] && matrix[cur_node][i])
			passing(i);
	}
}
