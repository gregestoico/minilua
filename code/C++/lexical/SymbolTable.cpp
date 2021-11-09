	#include "SymbolTable.h"

	SymbolTable::SymbolTable()
	{
		// Symbols
		m_symbols[";"] = TT_SEMICOLON;
		m_symbols["="] = TT_ASSIGN;
		m_symbols[","] = TT_COMMA;
		m_symbols["["] = TT_OPENBRACKET;
		m_symbols["]"] = TT_CLOSEBRACKET;
		m_symbols["{"] = TT_OPENBRACE;
		m_symbols["}"] = TT_CLOSEBRACE;

		// Arithmetic operators
		m_symbols["+"] = TT_ADD;
		m_symbols["-"] = TT_SUB;
		m_symbols["*"] = TT_MUL;
		m_symbols["/"] = TT_DIV;
		m_symbols["%d"] = TT_MOD;

		// String operators
		m_symbols[".."] = TT_CONCATENATION;

		// Logic operators
		m_symbols["=="] = TT_EQUAL;
		m_symbols["~="] = TT_NOT_EQUAL;
		m_symbols["<"] = TT_LOWER;
		m_symbols["<="] = TT_LOWER_EQUAL;
		m_symbols[">"] = TT_GREATER;
		m_symbols[">="] = TT_GREATER_EQUAL;
		m_symbols["not"] = TT_NOT;

		// Conectors
		m_symbols["and"] = TT_AND;
		m_symbols["or"] = TT_OR;


		// Keywords
		m_symbols["while"] = TT_WHILE;
		m_symbols["if"] = TT_IF;
		m_symbols["print"] = TT_PRINT;
		m_symbols["read"] = TT_READ;
		m_symbols["tonumber"] = TT_TONUMBER;
		m_symbols["tostring"] = TT_TOSTRING;
		//TT_NOT,         // not
		//TT_THEN,        // then
		//TT_ELSE,        // else
		//TT_TRUE,        // true
		//TT_FALSE,       // false
	}

	SymbolTable::~SymbolTable()
	{
		return m_symbols.find(token) != m_symbols.end();
	}

	bool SymbolTable::contains(std::string& token) const
	{
		return this->contains(token) ? m_symbols[token] : TT_INVALID_TOKEN;
	}

	//enum TokenType find(const std::string& token) const;
