#ifndef MESSAGE_INTERFACE_HPP
#define MESSAGE_INTERFACE_HPP

#include <array>
#include <string>
#include <vector>

#include "Defines.hpp"

namespace MsgInterface
{
	enum class MsgType : unsigned char
	{
		Unknown = 1,
		Move,
		Login,
		Say,
		Ping
	};

	size_t GetSizeOfPackageByMsgType (const MsgType &type);

	const std::string_view PrintMsgType (const MsgType &type);

	template <class var> std::vector<unsigned char> VarToBytes (var &data)
	{
		unsigned char *            bytes = ((unsigned char *) (&data));
		std::vector<unsigned char> output;
		for (unsigned int i = 0; i < sizeof (data); i++) output.push_back (bytes [i]);

		return output;
	}

	template <class var> unsigned char *VarToBytes (var &data, int &arraysize)
	{
		unsigned char *bytes = ((unsigned char *) (&data));

		arraysize = sizeof (data);

		return bytes;
	}

	template <class var> void BytesToVar (std::vector<unsigned char> &input_bytes, var &data)
	{
		if ((sizeof (data) >= input_bytes.size( )) && (!input_bytes.empty( )))
		{
			unsigned char *bytes = new unsigned char [input_bytes.size( )];
			for (unsigned int i = 0; i < input_bytes.size( ); i++) bytes [i] = input_bytes [i];

			data = ((var &) (*bytes));
			delete [] bytes;
		}
	}

	template <class var> void BytesToVar (unsigned char *input_bytes, var &data) { data = ((var &) (*input_bytes)); }
}  // namespace MsgInterface

#endif /* MESSAGE_MOVE_HPP */
