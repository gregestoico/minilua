#ifndef LEXEME.h

#define LEXEME.h

#include <string>
#include "TokenType.h"
#include <sstream>

struct Lexeme
{
	std::string token;
	enum TokenType type;

	Lexeme(): token(""), type(TT_END_OF_FILE) {}
	virtual ~Lexeme() {}

	const std::string str()
	{
		std::stringstream ss;
		ss << "(\"" << token << "\", " << tt2str(type) << ")";
		return ss.str();
	}
};

#endif
