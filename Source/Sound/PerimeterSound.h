#pragma once

//�������������/��������������� ����������
bool SNDInitSound(HWND g_hWnd,bool bEnable3d,bool soft3d);
void SNDReleaseSound();
void* SNDGetDirectSound();//���������� ��������� �� LPDIRECTSOUND8

void SNDEnableSound(bool enable);
void SNDEnableVoices(bool enable);
bool SNDIsVoicesEnabled();
bool SNDIsSoundEnabled();

void SNDSetSoundDirectory(LPCSTR dir);
LPCSTR SNDGetSoundDirectory();

void SNDSetLocDataDirectory(LPCSTR dir);
void SNDSetBelligerentIndex(int idx);

//������ � ��������
bool SNDEnableErrorLog(LPCSTR file);

void SNDSetVolume(float volume);//volume=0..1
float SNDGetVolume();

//������ ���������������� ������ ������ � ������ 
//� ��������� � ��� ���������� � ������� 
bool SNDScriptPrmEnableAll();
//������� ������, ��������� ��� ��������������� ������ ������
bool SND3DScriptDisable(LPCSTR name);
void SND3DScriptDisableAll();
bool SND2DScriptDisable(LPCSTR name);
void SND2DScriptDisableAll();

//������� ��������� ��� ������ �������
//������ �����������, ��� ������ ������������ �������� 
//SNDScriptDisable, �� ���� �����, �� ������ ��� ��� ��������, ��� �� 
//�������������, ����� ����� �� ���������� �����

void SNDPausePush();//���������� ��� �����, c ������������ ����������� ������������ 
void SNDPausePop();//���������� ������ ��� ������������� �����
int SNDGetPushLevel();//���������� ������� �����������

void SNDStopAll();//���������� ��� �����

////////////////////////////3D/////////////////////////////////


class SND3DSound
{
	struct ScriptParam* script;
	int cur_buffer;
public:
	SND3DSound();
	~SND3DSound();
	bool Init(LPCSTR name);

	bool Play(bool cycled=true);
	bool Stop();
	bool IsPlayed();
	
	void SetPos(const Vect3f& pos);//����������� ������� �� Play
	void SetVelocity(const Vect3f& velocity);
	void SetVolume(float vol);//0..1 ��������� volmin � volume


	//ScriptFrequency - ���������� ������������� 
	bool SetFrequency(float frequency);//0..2 - 0 - �����������, 1 - �� ���������

	//SetFrequency - frequency=1..44100 ��, ������������ - 0
	bool SetRealFrequency(DWORD frequency);
	void SetRealVolume(float vol);//0..1
protected:
	inline void AssertValid();
	void Destroy();
};

bool SND3DPlaySound(LPCSTR name,
					const Vect3f* pos,
					const Vect3f* velocity=NULL//�� ��������� ������ ��������� �����������
					);

class SND3DListener
{
protected:
	friend struct SNDOneBuffer;
	friend class SoftSound3D;
	friend class SND3DSound;

	Mat3f rotate,invrotate;
	Vect3f position;
	//MatXf mat;
	Vect3f velocity;

	//��������� ��� software
	float s_distance_factor;
	float s_doppler_factor;
	float s_rolloff_factor;

	Vect3f front,top,right;

	float zmultiple;
public:
	SND3DListener();
	~SND3DListener();

	//��������� ���������� ����� (������ ����� �� ������ � ������������� �� ������� �������)
	//� ����-�� ��� �� �������� (�� �� ���� �� ����� �������)
	bool SetDistanceFactor(float);//1 - � ������, 1000 - � ����������
	bool SetDopplerFactor(float);//0..10, �� ��������� 1
	bool SetRolloffFactor(float);

	//SetPos ���� �������� ������ ����
	bool SetPos(const MatXf& mat);

	Vect3f GetPos(){return position;};

	//SetVelocity - ���������� �������� ������ ����
	//����� �� ����� ������ � SetDopplerFactor,SetRolloffFactor
	bool SetVelocity(const Vect3f& velocity);

	//������� ���������� ��� ������
	//���-�� ���������� �� Z ���� ������.
	//� �������� ������� ����� ��������\
	//zmul=0..1
	void SetZMultiple(float zmul){zmultiple=zmul;};

	//Update - �������� ����� ��������� ���������� (SetPos,...)
	//(���� ��� �� ����!)
	bool Update();
};

extern SND3DListener snd_listener;

////////////////////////////2D/////////////////////////////////

//volume : 0 - ������, 1 - �������
//pan : 0 - ������ ����� ���������, 0.5 - �����, +1 - ������ ������
//��� ������, ������� ������ ����������� ���� ���
//� �������� � ����� �����
bool SND2DPlaySound(LPCSTR name,float x=0.5f,DWORD frequency=0);

//������������� ��������� �������� �� SND2DPanByX
//width - ������ ������, power - ������ �� ��, 
//��������� ������ ������ ����� ����� ������� � ����� ��������
//power=1 - ������������ ����������, power=0 - �����������
void SND2DPanByX(float width,float power);

class SND2DSound
{
	struct ScriptParam* script;
	int cur_buffer;
public:
	SND2DSound();
	~SND2DSound();
	bool Init(LPCSTR name);

	bool Play(bool cycled=true);
	bool Stop();
	bool IsPlayed() const;
	
	bool SetPos(float x);//����������� ������� �� Play
	bool SetFrequency(float frequency);//0..2 - 0 - �����������, 1 - �� ���������
	void SetVolume(float vol);//0..1

	////
	void SetRealVolume(float vol);//0..1
	bool SetRealFrequency(DWORD frequency);
protected:
	inline void AssertValid();
	inline void Destroy();
};

