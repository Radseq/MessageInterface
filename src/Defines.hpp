#ifndef DEFINES_HPP
#define DEFINES_HPP

namespace MsgInterface
{
	constexpr int           MAX_MSG_SIZE = 16384;
	constexpr unsigned char endMsgFirst {'\042'};
	constexpr unsigned char endMsgSecond {'\140'};
}  // namespace MsgInterface

#endif  // DEFINES_HPP