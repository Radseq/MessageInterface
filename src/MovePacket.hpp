#ifndef MOVE_PACKET_HPP
#define MOVE_PACKET_HPP

#include "MessageInterface.hpp"

struct MovePacket
{
	MsgInterface::MsgType type = MsgInterface::MsgType::Move;
	short                 entity;
	float                 x;
	float                 y;
	float                 z;
};

#endif /* MOVE_PACKET_HPP */
