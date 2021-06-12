#ifndef PING_PACKET_HPP
#define PING_PACKET_HPP

#include "MessageInterface.hpp"

struct PingPacket
{
	MsgInterface::MsgType type = MsgInterface::MsgType::Ping;
	short                 ping;
};

#endif /* PING_PACKET_HPP */
