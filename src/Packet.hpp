#ifndef PACKET_HPP
#define PACKET_HPP

#include "MessageInterface.hpp"

struct Packet
{
	// int                        time;
	// i think i need send current time, maybe do this a separate package.
	std::array<unsigned char, MsgInterface::MAX_MSG_SIZE> data;
	int                                                   size;
	// int                        flag; // hmm
	unsigned char eof [2] {MsgInterface::endMsgFirst, MsgInterface::endMsgSecond};
};

#endif /* PACKET_HPP */
