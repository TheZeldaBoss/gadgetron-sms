#ifndef GADGETRON_SMSCORE_EXPORT_H_
#define GADGETRON_SMSCORE_EXPORT_H_

#if defined (WIN32)
#if defined (__BUILD_GADGETRON_SMSCORE__)
#define EXPORTGADGETSSMSCORE __declspec(dllexport)
#else
#define EXPORTGADGETSSMSCORE __declspec(dllimport)
#endif
#else
#define EXPORTGADGETSSMSCORE
#endif

#endif /* GADGETRON_SMSCORE_EXPORT_H_ */
