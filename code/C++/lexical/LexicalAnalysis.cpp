#include "LexicalAnalysis.h"


	LexicalAnalysis::LexicalAnalysis(const char* filename) : m_line(0)
	{
		m_input = fopen(filename, "r");
	}

	LexicalAnalysis::~LexicalAnalysis()
	{
		if(m_input!=nullptr)
			fclose(m_input);
	}

	Lexeme LexicalAnalysis::nextToken()
	{
		Lexeme lex;

		return lex;
	}

