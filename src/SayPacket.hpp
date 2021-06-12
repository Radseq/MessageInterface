#ifndef SAY_PACKET_HPP
#define SAY_PACKET_HPP

#include "MessageInterface.hpp"

struct SayPacket
{
	MsgInterface::MsgType type = MsgInterface::MsgType::Say;
	short         entity;
	char          text [64];
};

#endif /* SAY_PACKET_HPP */
