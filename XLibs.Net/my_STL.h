////////////////////////////////////////////////////////////////////////////////
//
// Additional include for making STL more convenient
//
// Author: Alexandre Kotliar, K-D Lab
//
////////////////////////////////////////////////////////////////////////////////
#ifndef __STL_ADDITION_H__
#define __STL_ADDITION_H__

//#define _STLP_NO_IOSTREAMS 1

//namespace stlp_std//������� ��� ������ STL, � ������� ��� stream
//{
//	class ostream
//	{
//	};
//};

// For disabling some warning 
#pragma warning( disable : 4786 4284 4800)
//#pragma warning( disable : 4018)
#pragma warning( disable : 4244 4018)
#pragma warning( disable : 4554 4996)

#ifdef __ICL
#pragma warning( disable : 880 1125)
#endif

#ifndef FOR_EACH
#define FOR_EACH(list, iterator) \
  for((iterator) = (list).begin(); (iterator) != (list).end(); ++(iterator))
#endif

#if (_MSC_VER < 1300)

#if !defined (_STLP_NO_NEW_IOSTREAMS)
#define   _STLP_NO_NEW_IOSTREAMS	1
#endif

#define   _STLP_NO_OWN_IOSTREAMS	1


//#if !defined (_STLP_NO_NAMESPACES)
//#define   _STLP_NO_NAMESPACES 1
//#endif

#endif //(_MSC_VER < 1300)

//TODO whatever non win/msvc tweaks required, this should be cleaned up further and also moved somewhere else?

#ifndef _MSC_VER
#define __forceinline inline
#endif //_MSC_VER


#endif // __STL_ADDITION_H__