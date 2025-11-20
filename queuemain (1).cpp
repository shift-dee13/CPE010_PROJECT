#include<iostream> 
#include "queue.h"

int main()
{
	
	Queue<std::string>Q1;
	
	
	Q1.enqueue("francis");
	Q1.enqueue("Jason");
	Q1.enqueue("Curwin");
	Q1.enqueue("Abila");
	Q1.enqueue("Dano");
	Q1.getFront();
	Q1.dequeue();	
	Q1.getFront();
	Q1.getRear();
	Q1.display();
	
	
	
	
	
	
	return 0;
}
