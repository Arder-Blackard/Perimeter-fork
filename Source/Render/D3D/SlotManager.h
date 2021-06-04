#pragma once
/*
	������������ ���� ������.
	���� ���� ��� �� �����, ������� ���.
*/

template<class Slot>
class cSlotManager
{
public://������� ���, ���-�� operator[] ��� �������� � ���������� ������� ��� ������������� NewSlot,DeleteSlot � ������ ������
	allocator<Slot> alloc;
	typedef vector<Slot*> array;
	typedef typename array::iterator iterator;
protected:
	array all_slot;
	stack<Slot*> free_slot;
public:
	cSlotManager()
	{
	}

	~cSlotManager()
	{
		clear();
	}

	Slot* NewSlot();
	void DeleteSlot(Slot* slot);

	void clear();
	inline int size(){return all_slot.size();};
	inline Slot* operator[](int slot);
};

//�������/������������� ���������� Slot::init � DeleteSlot/NewSlot
template<class Slot>
class cSlotManagerInit:public cSlotManager<Slot>
{
public:
	inline Slot* NewSlot(){Slot* p=cSlotManager<Slot>::NewSlot(); p->init=true; return p;};
	inline void DeleteSlot(Slot* slot){slot->init=false;cSlotManager<Slot>::DeleteSlot(slot);};
};

//////////implementation////////////////
template<class Slot>
Slot* cSlotManager<Slot>::NewSlot()
{
	if(free_slot.empty())
	{
		Slot* slot=alloc.allocate(sizeof(Slot));
		all_slot.push_back(slot);
		return slot;
	}

	Slot* top=free_slot.top();
	free_slot.pop();
	return top;
}

template<class Slot>
void cSlotManager<Slot>::DeleteSlot(Slot* slot)
{
	free_slot.push(slot);
}

template<class Slot>
Slot* cSlotManager<Slot>::operator[](int slot)
{
	VISASSERT(slot>=0 && slot<all_slot.size());
	return all_slot[slot];
}

template<class Slot>
void cSlotManager<Slot>::clear()
{
	iterator it;
	FOR_EACH(all_slot,it)
	{
		alloc.deallocate(*it,sizeof(Slot));
	}
	all_slot.clear();
	while(!free_slot.empty())
		free_slot.pop();
}
