#pragma once
#include "windows.h"
typedef struct _SectionNode
{
	//��ѹ����
	DWORD SizeOfRawData;
	DWORD SectionRva;
}SectionNode;
typedef struct _GlogalExternVar 
{
	SectionNode mSectionNodeArray[16];
	//�ӿǵĵ�����ַ
	DWORD dwIATVirtualAddress;
	//�ӿǵ�tls���ݴ�С
	DWORD dwTLSSize;
	//�ӿǵ�tls�����ַ rva
	DWORD dwTLSVirtualAddress;
	//�ӿǵ�ԭʼoep
	DWORD dwOrignalOEP;
	//�ض�λrva
	DWORD dwRelocationRva;

	DWORD dwBaseOfCode;

	DWORD dwOrignalImageBase;
	DWORD dwPressSize;
}GlogalExternVar;