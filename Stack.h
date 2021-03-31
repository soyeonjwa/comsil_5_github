#include "LinkedList.h"


template <class U>
class Stack : public LinkedList<U>{
	public:
		bool Delete (int &element){
			//first가 0이면 false반환
			if(this->first == 0) return false;

			// LinkedList와 달리 Stack은 current가 가리키는 곳을 삭제
			Node<U> *current = this->first;
			this->first=current->link;
			current = NULL;
			
			this->current_size--;

			return true;
			}
};
