#ifndef MSPUBLISHER_H
#define MSPUBLISHER_H
namespace OleStructuredStorage {
	namespace Publisher {

		struct PubHeader {
			unsigned short one;
			unsigned short two;
			unsigned short version0;
			unsigned short version1;
			unsigned long unkown;
			unsigned short version2;
		};

	}
}
#endif