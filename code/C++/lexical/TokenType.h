#ifndef TOKEN_TYPE_H
#define TOKEN_TYPE_H

enum TokenType
{
	// Specials
	TT_UNEXPECTED_EOF = -2,
	TT_INVALID_TOKEN = -1,
	TT_END_OF_FILE = 0,

	// Symbols
	TT_SEMICOLON,     // ;
	TT_ASSIGN,        // =
	TT_COMMA,         // ,
	TT_OPENBRACKET,   // [
	TT_CLOSEBRACKET,  // ]
	TT_OPENBRACE,     // {
	TT_CLOSEBRACE,    // }

	// Arithmetic operators
	TT_ADD,           // +
	TT_SUB,           // -
	TT_MUL,           // *
	TT_DIV,           // /
	TT_MOD,           // %

	// String operators
	TT_CONCATENATION,  // ..

	// Logic operators
	TT_EQUAL,         // ==
	TT_NOT_EQUAL,     // ~=
	TT_LOWER,         // <
	TT_LOWER_EQUAL,   // <=
	TT_GREATER,       // >
	TT_GREATER_EQUAL, // >=
	TT_NOT, 		  // not

	// Conectors
	TT_AND,           // and
	TT_OR,            // or


	// Keywords
	TT_WHILE,         // while
	TT_IF,            // if
	TT_PRINT,         // output
	TT_READ,          // read
	TT_TONUMBER,      // tonumber
	TT_TOSTRING,      // tostring
	//TT_NOT,         // not
	//TT_THEN,        // then
	//TT_ELSE,        // else
	//TT_TRUE,        // true
	//TT_FALSE,       // false

	// Others
	TT_NUMBER,        // number
	TT_VAR            // variable
};


inline std::string tt2str(enum TokenType type)
{
	switch(type)
	{
		// Specials
		case TT_UNEXPECTED_EOF:
			return "UNEXPECTED_EOF";
		case TT_INVALID_TOKEN:
			return "INVALID_TOKEN";
		case TT_END_OF_FILE:
			return "END_OF_FILE";

		// Symbols
		case TT_SEMICOLON:
			return "SEMICOLON";
		case TT_ASSIGN:
			return "ASSIGN";
		case TT_COMMA:
			return "COMMA";
		case TT_OPENBRACKET:
			return "OPENBRACKET";
		case TT_CLOSEBRACKET:
			return "CLOSEBRACKET";
		case TT_OPENBRACE:
			return "OPENBRACE";
		case TT_CLOSEBRACE:
			return "CLOSEBRACE";

		// Arithmetic operators
		case TT_ADD:
			return "ADD";
		case TT_SUB:
			return "SUB";
		case TT_MUL:
			return "MUL";
		case TT_DIV:
			return "DIV";
		case TT_MOD:
			return "MOD";

		// String operators
		case TT_CONCATENATION:
			return "CONCATENATION";
		case TT_LOWER_EQUAL:
			return "LOWER_EQUAL";
		case TT_GREATER:
			return "GREATER";
		case TT_GREATER_EQUAL:
			return "GREATER_EQUAL";
		case TT_NOT:
			return "NOT";

		// Conectors
		case TT_AND:
			return "AND";
		case TT_OR:
			return "OR";


		// Keywords
		case TT_WHILE:
			return "WHILE";
		case TT_IF:
			return "IF";
		case TT_PRINT:
			return "PRINT";
		case TT_READ:
			return "READ";
		case TT_TONUMBER:
			return "TONUMBER";
		case TT_TOSTRING:
			return "TOSTRING";
		//TT_NOT,         // not
		//TT_THEN,        // then
		//TT_ELSE,        // else
		//TT_TRUE,        // true
		//TT_FALSE,       // false

		// Others
		case TT_NUMBER:
			return "NUMBER";
		case TT_VAR:
			return "VAR";

		default:
			throw std::string("Invalid token type.");
	}

}
#endif
