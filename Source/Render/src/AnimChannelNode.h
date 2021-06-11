#ifndef __ANIMCHANNELNODE_H__
#define __ANIMCHANNELNODE_H__

template <class cAnimChainBase> class cAnimChannelBase : protected vector<cAnimChainBase>
{ // ��������� ������� ����� ��������
public:
	cAnimChannelBase()									{ }
	~cAnimChannelBase()									{ }
	void NewChannel(int number)							{ this->resize(number); }
	inline int GetNumberChannel()						{ return this->size(); }
	inline cAnimChainBase* GetChannel(int number)		{ return &((*this)[number]); }
};

struct sKey3f
{
	Vect3f		v;
	float		time;
};
struct sKey4f
{
	QuatF		q;
	float		time;
};
struct sKeyVisible
{
	int			visible;
	float		time;
};
struct sKeyMatrix
{
	MatXf		mat;
	float		time;
};

class cAnimChainNode
{ // ���� ������� ��������
protected:
	friend class cAnimChannelNode;
	vector<sKeyVisible>			KeyVisible;			// �������� ��������� �������
	vector<sKeyMatrix>			KeyMatrix;			// �������� �������� �������
	float						Time;				// ����������������� ������� ��������
	string						name;				// ��� ������������ �������
public:
	cAnimChainNode();
	~cAnimChainNode();
	float& GetTime()								{ return Time; }
	sKeyMatrix& GetMatrix(int number)				{ return KeyMatrix[number]; }
	sKeyVisible& GetVisible(int number)				{ return KeyVisible[number]; }
	int GetNumberMatrix()							{ return KeyMatrix.size(); }
	int GetNumberVisible()							{ return KeyVisible.size(); }

	//������������ � LogicGeneric
	void SetName(const char *NameChain)					{ name=NameChain; }
	const char* GetName() const							{ return name.c_str(); }

	// ������������ ��������
	void GetMatrix(float phase,MatXf &Matrix);
	void GetVisible(float phase,int &visible);

	inline int IsAnimMatrix()				{ return GetNumberMatrix()>1; }
};

class cAnimChannelNode : public cUnknownClass,public cAnimChannelBase<cAnimChainNode>
{ 
	// ���������� ����� cObjectNode, ������� �� ���������� ��� �������� 
	// ���������� ������� �� ����� � ���-�� m3d
	// ������ ������� ��������
public:
	string			ObjectName;
	class EffectKey*		effect_key;

	cAnimChannelNode(){effect_key=NULL;}
	~cAnimChannelNode();
	inline void NewMatrix(int nChain,int number)	{ GetChannel(nChain)->KeyMatrix.resize(number); }
	inline void NewVisible(int nChain,int number)	{ GetChannel(nChain)->KeyVisible.resize(number); }
	inline int IsAnimMatrix(int nChain)				{ return GetChannel(nChain)->IsAnimMatrix(); }

	int temp_freeone;
};

template<class cBase> __forceinline int BinaryFind(int key,vector<cBase> &Array)
{ // ������� ����������� ������� ����� ��������
	int start;
	int finish;
	for(start=0,finish=Array.size()-1; ; )
	{
		int test=(finish+start)>>1;
		if( Array[test].time>key )
			if( finish!=test )
				finish=test;
			else 
				break;
		else
			if( start!=test )
				start=test;
			else
				break;
	}
	VISASSERT( start>=0 && start<(Array.size()-1) );
	return start;
}

#endif //__ANIMCHANNELNODE_H__