#pragma once
#include "MyQueue.h"

namespace myQueue {

	template<typename U>
	class PriorityQueue : public Queue<U>
	{
	public:
		void push_back(U value) {
			Node<U>* el = new Node<U>(value);

			if (Queue<U>::isEmpty()) {
				Queue<U>::head = Queue<U>::current = el;
			}
			else {
				Node<U>* p = Queue<U>::head;
				while (p != nullptr && el->info < p->info) //Пошук місця
					p = p->next;

				if (p == Queue<U>::head) {  //Додаємо вузол на початок
					Queue<U>::head->prev = el;
					el->next = Queue<U>::head;

					Queue<U>::head = el;
				}
				else if (p == nullptr) {//Додаємо вузол в кінець
					Queue<U>::current->next = el;
					el->prev = Queue<U>::current;

					Queue<U>::current = el;
				}
				else { //Додаємо вузол в середину
					el->next = p;
					el->prev = p->prev;

					//(el->prev)->next = el;
					(p->prev)->next = el;
					p->prev = el;
				}
			}
		}
	};

}
