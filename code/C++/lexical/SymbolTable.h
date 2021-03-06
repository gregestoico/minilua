#ifndef SYMBOL_TABLE_H
#define SYMBOL_TABLE_H

#include <map>
#include "TokenType.h"

class SymbolTable
{
	public:
	SymbolTable();
	virtual ~SymbolTable();

	bool contains(std::string& token) const;
	enum TokenType find(const std::string& token) const;
	private: map<std::string, enum TokenType> m_symbols;

}
#endif
