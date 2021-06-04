#ifndef _ZIPSTREAM_H_
#define _ZIPSTREAM_H_

#include <xutil.h>

class ZIPStream : public XStream
{
public:
	ZIPStream(const char* name);
};

//���� �� �������� ZIPOpen, �� ���� ����� ����������� ������ ����
void ZIPOpen(const char* zip_filename);
void ZIPClose();
bool ZIPIsOpen();

#endif  _ZIPSTREAM_H_