#include "MessageInterface.hpp"

#include "MovePacket.hpp"
#include "PingPacket.hpp"
#include "SayPacket.hpp"

namespace MsgInterface
{
	size_t GetSizeOfPackageByMsgType (const MsgType &type)
	{
		switch (type)
		{
			case MsgType::Move:
				return sizeof (MovePacket);
				break;
			case MsgType::Say:
				return sizeof (SayPacket);
			case MsgType::Ping:
				return sizeof (PingPacket);
			default:
				return 0;
				break;
		}
	}

	const std::string_view PrintMsgType (const MsgType &type)
	{
		std::string_view result;
		switch (type)
		{
			case MsgType::Login:
				result = "Login";
				break;
			case MsgType::Move:
				result = "Move";
				break;
			case MsgType::Say:
				result = "Say";
				break;
			case MsgType::Ping:
				result = "Ping";
			default:
				result = "Unknown";
				break;
		}
		return result;
	}
}  // namespace MsgInterface