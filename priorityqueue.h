#pragma once
#include"priorityNode.h"

template <typename T>
class priorityqueue
{
	int t;
	priorityNode <T>* Head;
		priorityNode <T>*  rare;


public:
	bool isEmpty() {
		return (Head == nullptr);
	}
	priorityqueue() {
		
			rare = nullptr;
			Head = nullptr;

		
	}
	bool enqueue(const T& newitem, int sig) {
		bool b=true; 
		priorityNode<T>* newNodePtr = new priorityNode<T>(newitem, sig);
		priorityNode<T>* itrator = Head;
		if (isEmpty())
		{
			Head = newNodePtr;
		   rare = newNodePtr;
		   b = false;
	    }
		else if(itrator->getsignificant()<sig)
		{
			b = false;
			newNodePtr->setnext(Head);
			Head = newNodePtr;
			
		}
		else while (itrator->getNext()->getsignificant() < sig)
		{
			b = false;
			newNodePtr->setnext(itrator->getNext());
			itrator->setNext(newNodePtr);
			itrator = itrator->getNext();
		}
        if(b){
		itrator->setNext(newNodePtr);
		rare = newNodePtr;
		}
		return true;
	}
	bool dequeue(T& hd)
	{
		if (isEmpty())
			return false;

		priorityNode<T>* Deletednode = Head;
		hd = Head->getItem();
		Head = Head->getNext();

		if (Deletednode == rare)
			rare = nullptr;
		delete Deletednode;
		return true;
	}
	bool peak(T& hd) {
		if (isEmpty())
			return false;
		hd = Head->getItem();
		return true;
	}
};
