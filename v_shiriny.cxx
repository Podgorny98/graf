#include <iostream>
#include <queue> // очередь

using namespace std;

enum {GRAF_SIZE = 10};									//размер графа

////////////////////////////////////////////////////////////////////////
/*	Состояния вершин:
	0 - не обнаружена
	1 - обнаружена
	2 - посещена
*/
////////////////////////////////////////////////////////////////////////

int main() {
	queue<int> Queue;
	int matrix[GRAF_SIZE][GRAF_SIZE];								// матрица смежности, задающая граф
	int node_status[7] = {};										// показывает состояние вершины, сначала все вершины 0
	Queue.push(0); 													// помещаем в очередь первую вершину
	while (!Queue.empty()) {										// пока очередь не пуста
		int node = Queue.front();									// достаем из очереди текущую вершину
		Queue.pop();
		node_status[node] = 2; 										// отмечаем ее как посещенную
		for (int j = 0; j < GRAF_SIZE; j++)	{ 						// проверяем для нее все смежные вершины
			if (matrix[node][j] == 1 && node_status[j] == 0) {		// если вершина смежная и не обнаружена
			Queue.push(j); 											// добавляем ее в очередь
			node_status[j] = 1;										// отмечаем её как обнаруженную 
			}
		}
	}
	return 0;
}
