/** \file
 *  This C header file was generated by $ANTLR version 3.3 Nov 30, 2010 12:45:30
 *
 *     -  From the grammar source file : C:\\workspace\\personal\\djondb\\db\\grammars\\filter_expression.g
 *     -                            On : 2012-07-12 13:54:41
 *     -                for the parser : filter_expressionParserParser *
 * Editing it, at least manually, is not wise. 
 *
 * C language generator and runtime by Jim Idle, jimi|hereisanat|idle|dotgoeshere|ws.
 *
 *
 * The parser filter_expressionParser has the callable functions (rules) shown below,
 * which will invoke the code for the associated rule in the source grammar
 * assuming that the input stream is pointing to a token/text stream that could begin
 * this rule.
 * 
 * For instance if you call the first (topmost) rule in a parser grammar, you will
 * get the results of a full parse, but calling a rule half way through the grammar will
 * allow you to pass part of a full token stream to the parser, such as for syntax checking
 * in editors and so on.
 *
 * The parser entry points are called indirectly (by function pointer to function) via
 * a parser context typedef pfilter_expressionParser, which is returned from a call to filter_expressionParserNew().
 *
 * The methods in pfilter_expressionParser are  as follows:
 *
 *  - void*      pfilter_expressionParser->start_point(pfilter_expressionParser)
 *  - char*      pfilter_expressionParser->filter_expr(pfilter_expressionParser)
 *  - *      pfilter_expressionParser->boolean_expr(pfilter_expressionParser)
 *  - char*      pfilter_expressionParser->binary_expr(pfilter_expressionParser)
 *  - char*      pfilter_expressionParser->unary_expr(pfilter_expressionParser)
 *  - char*      pfilter_expressionParser->xpath_expr(pfilter_expressionParser)
 *  - char*      pfilter_expressionParser->constant_expr(pfilter_expressionParser)
 *  - char*      pfilter_expressionParser->operand_expr(pfilter_expressionParser)
 *
 * The return type for any particular rule is of course determined by the source
 * grammar file.
 */
// [The "BSD licence"]
// Copyright (c) 2005-2009 Jim Idle, Temporal Wave LLC
// http://www.temporal-wave.com
// http://www.linkedin.com/in/jimidle
//
// All rights reserved.
//
// Redistribution and use in source and binary forms, with or without
// modification, are permitted provided that the following conditions
// are met:
// 1. Redistributions of source code must retain the above copyright
//    notice, this list of conditions and the following disclaimer.
// 2. Redistributions in binary form must reproduce the above copyright
//    notice, this list of conditions and the following disclaimer in the
//    documentation and/or other materials provided with the distribution.
// 3. The name of the author may not be used to endorse or promote products
//    derived from this software without specific prior written permission.
//
// THIS SOFTWARE IS PROVIDED BY THE AUTHOR ``AS IS'' AND ANY EXPRESS OR
// IMPLIED WARRANTIES, INCLUDING, BUT NOT LIMITED TO, THE IMPLIED WARRANTIES
// OF MERCHANTABILITY AND FITNESS FOR A PARTICULAR PURPOSE ARE DISCLAIMED.
// IN NO EVENT SHALL THE AUTHOR BE LIABLE FOR ANY DIRECT, INDIRECT,
// INCIDENTAL, SPECIAL, EXEMPLARY, OR CONSEQUENTIAL DAMAGES (INCLUDING, BUT
// NOT LIMITED TO, PROCUREMENT OF SUBSTITUTE GOODS OR SERVICES; LOSS OF USE,
// DATA, OR PROFITS; OR BUSINESS INTERRUPTION) HOWEVER CAUSED AND ON ANY
// THEORY OF LIABILITY, WHETHER IN CONTRACT, STRICT LIABILITY, OR TORT
// (INCLUDING NEGLIGENCE OR OTHERWISE) ARISING IN ANY WAY OUT OF THE USE OF
// THIS SOFTWARE, EVEN IF ADVISED OF THE POSSIBILITY OF SUCH DAMAGE.

#ifndef	_filter_expressionParser_H
#define _filter_expressionParser_H
/* =============================================================================
 * Standard antlr3 C runtime definitions
 */
#include    <antlr3.h>

/* End of standard antlr 3 runtime definitions
 * =============================================================================
 */

//#include <stdlib.h>
   #include <stdlib.h>
   #include <stdio.h>

 
#ifdef __cplusplus
extern "C" {
#endif

// Forward declare the context typedef so that we can use it before it is
// properly defined. Delegators and delegates (from import statements) are
// interdependent and their context structures contain pointers to each other
// C only allows such things to be declared if you pre-declare the typedef.
//
typedef struct filter_expressionParser_Ctx_struct filter_expressionParser, * pfilter_expressionParser;



#ifdef	ANTLR3_WINDOWS
// Disable: Unreferenced parameter,							- Rules with parameters that are not used
//          constant conditional,							- ANTLR realizes that a prediction is always true (synpred usually)
//          initialized but unused variable					- tree rewrite variables declared but not needed
//          Unreferenced local variable						- lexer rule declares but does not always use _type
//          potentially unitialized variable used			- retval always returned from a rule 
//			unreferenced local function has been removed	- susually getTokenNames or freeScope, they can go without warnigns
//
// These are only really displayed at warning level /W4 but that is the code ideal I am aiming at
// and the codegen must generate some of these warnings by necessity, apart from 4100, which is
// usually generated when a parser rule is given a parameter that it does not use. Mostly though
// this is a matter of orthogonality hence I disable that one.
//
#pragma warning( disable : 4100 )
#pragma warning( disable : 4101 )
#pragma warning( disable : 4127 )
#pragma warning( disable : 4189 )
#pragma warning( disable : 4505 )
#pragma warning( disable : 4701 )
#endif

/** Context tracking structure for filter_expressionParser
 */
struct filter_expressionParser_Ctx_struct
{
    /** Built in ANTLR3 context tracker contains all the generic elements
     *  required for context tracking.
     */
    pANTLR3_PARSER   pParser;


     void* (*start_point)	(struct filter_expressionParser_Ctx_struct * ctx);
     char* (*filter_expr)	(struct filter_expressionParser_Ctx_struct * ctx);
     * (*boolean_expr)	(struct filter_expressionParser_Ctx_struct * ctx);
     char* (*binary_expr)	(struct filter_expressionParser_Ctx_struct * ctx);
     char* (*unary_expr)	(struct filter_expressionParser_Ctx_struct * ctx);
     char* (*xpath_expr)	(struct filter_expressionParser_Ctx_struct * ctx);
     char* (*constant_expr)	(struct filter_expressionParser_Ctx_struct * ctx);
     char* (*operand_expr)	(struct filter_expressionParser_Ctx_struct * ctx);
    // Delegated rules

    const char * (*getGrammarFileName)();
    void            (*reset)  (struct filter_expressionParser_Ctx_struct * ctx);
    void	    (*free)   (struct filter_expressionParser_Ctx_struct * ctx);
        
};

// Function protoypes for the constructor functions that external translation units
// such as delegators and delegates may wish to call.
//
ANTLR3_API pfilter_expressionParser filter_expressionParserNew         (pANTLR3_COMMON_TOKEN_STREAM instream);
ANTLR3_API pfilter_expressionParser filter_expressionParserNewSSD      (pANTLR3_COMMON_TOKEN_STREAM instream, pANTLR3_RECOGNIZER_SHARED_STATE state);

/** Symbolic definitions of all the tokens that the parser will work with.
 * \{
 *
 * Antlr will define EOF, but we can't use that as it it is too common in
 * in C header files and that would be confusing. There is no way to filter this out at the moment
 * so we just undef it here for now. That isn't the value we get back from C recognizers
 * anyway. We are looking for ANTLR3_TOKEN_EOF.
 */
#ifdef	EOF
#undef	EOF
#endif
#ifdef	Tokens
#undef	Tokens
#endif 
#define EOF      -1
#define OR      4
#define AND      5
#define LPAREN      6
#define NOT      7
#define RPAREN      8
#define XPATH      9
#define INT      10
#define STRING      11
#define OPER      12
#define EXPONENT      13
#define FLOAT      14
#define COMMENT      15
#define WS      16
#define ESC_SEQ      17
#define HEX_DIGIT      18
#define UNICODE_ESC      19
#define OCTAL_ESC      20
#define COMMA      21
#define LBRAN      22
#define RBRAN      23
#define LBRAK      24
#define RBRAK      25
#define COLON      26
#define SEMICOLON      27
#ifdef	EOF
#undef	EOF
#define	EOF	ANTLR3_TOKEN_EOF
#endif

#ifndef TOKENSOURCE
#define TOKENSOURCE(lxr) lxr->pLexer->rec->state->tokSource
#endif

/* End of token definitions for filter_expressionParser
 * =============================================================================
 */
/** \} */

#ifdef __cplusplus
}
#endif

#endif

/* END - Note:Keep extra line feed to satisfy UNIX systems */
