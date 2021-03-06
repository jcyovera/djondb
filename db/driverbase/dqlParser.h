/** \file
 *  This C header file was generated by $ANTLR version 3.4
 *
 *     -  From the grammar source file : /home/cross/workspace/djondb/db/grammars/dql.g
 *     -                            On : 2013-05-28 13:35:34
 *     -                for the parser : dqlParserParser
 *
 * Editing it, at least manually, is not wise.
 *
 * C language generator and runtime by Jim Idle, jimi|hereisanat|idle|dotgoeshere|ws.
 *
 *
 * The parser 
dqlParser

has the callable functions (rules) shown below,
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
 * a parser context typedef pdqlParser, which is returned from a call to dqlParserNew().
 *
 * The methods in pdqlParser are  as follows:
 *
 *  - 
 Command*
      pdqlParser->start_point(pdqlParser)
 *  - 
 Command*
      pdqlParser->dql(pdqlParser)
 *  - 
 Command*
      pdqlParser->query_expr(pdqlParser)
 *  - 
 Command*
      pdqlParser->insert_expr(pdqlParser)
 *  - 
 Command*
      pdqlParser->update_expr(pdqlParser)
 *  - 
 Command*
      pdqlParser->remove_expr(pdqlParser)
 *  - 
 dqlParser_filter_expr_return
      pdqlParser->filter_expr(pdqlParser)
 *  - 
 void
      pdqlParser->boolean_expr(pdqlParser)
 *  - 
 void
      pdqlParser->boolean_term(pdqlParser)
 *  - 
 void
      pdqlParser->boolean_value(pdqlParser)
 *  - 
 void
      pdqlParser->parenthesized_boolean(pdqlParser)
 *  - 
 void
      pdqlParser->nonparentherized_boolean(pdqlParser)
 *  - 
 void
      pdqlParser->unary_expr(pdqlParser)
 *  - 
 void
      pdqlParser->exists_expr(pdqlParser)
 *  - 
 void
      pdqlParser->not_expr(pdqlParser)
 *  - 
 void
      pdqlParser->xpath_expr(pdqlParser)
 *  - 
 void
      pdqlParser->id_expr(pdqlParser)
 *  - 
 void
      pdqlParser->constant_expr(pdqlParser)
 *  - 
 void
      pdqlParser->operand_expr(pdqlParser)
 *  - 
 void
      pdqlParser->json_const(pdqlParser)
 *  - 
 void
      pdqlParser->json_array_expr(pdqlParser)
 *  - 
 dqlParser_json_expr_return
      pdqlParser->json_expr(pdqlParser)
 *  - 
 void
      pdqlParser->json_fieldname(pdqlParser)
 *
 * The return type for any particular rule is of course determined by the source
 * grammar file.
 */
// [The "BSD license"]
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

#ifndef	_dqlParser_H
#define _dqlParser_H
/* =============================================================================
 * Standard antlr3 C runtime definitions
 */
#include    <antlr3.h>

/* End of standard antlr 3 runtime definitions
 * =============================================================================
 */

//#include <stdlib.h>
   #include "util.h"
   #include "filterdefs.h"
   #include "constantexpression.h"
   #include "unaryexpression.h"
   #include "simpleexpression.h"
   #include "binaryexpression.h"
   #include "findcommand.h"
   #include "insertcommand.h"
   #include "updatecommand.h"
   #include "removecommand.h"
   #include "memorystream.h"
   #include <stdlib.h>
   #include <limits.h>
   #include <stdio.h>
   #ifndef WINDOWS
   #include <strings.h>
#endif
   #include <string>
   #include <iostream>


#ifdef __cplusplus
extern "C" {
#endif

// Forward declare the context typedef so that we can use it before it is
// properly defined. Delegators and delegates (from import statements) are
// interdependent and their context structures contain pointers to each other
// C only allows such things to be declared if you pre-declare the typedef.
//
typedef struct dqlParser_Ctx_struct dqlParser, * pdqlParser;



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
typedef struct dqlParser_filter_expr_return_struct
{
    /** Generic return elements for ANTLR3 rules that are not in tree parsers or returning trees
     */
    pANTLR3_COMMON_TOKEN    start;
    pANTLR3_COMMON_TOKEN    stop;
}
    dqlParser_filter_expr_return;



typedef struct dqlParser_json_expr_return_struct
{
    /** Generic return elements for ANTLR3 rules that are not in tree parsers or returning trees
     */
    pANTLR3_COMMON_TOKEN    start;
    pANTLR3_COMMON_TOKEN    stop;
}
    dqlParser_json_expr_return;





/** Context tracking structure for 
dqlParser

 */
struct dqlParser_Ctx_struct
{
    /** Built in ANTLR3 context tracker contains all the generic elements
     *  required for context tracking.
     */
    pANTLR3_PARSER   pParser;

     Command*
     (*start_point)	(struct dqlParser_Ctx_struct * ctx);

     Command*
     (*dql)	(struct dqlParser_Ctx_struct * ctx);

     Command*
     (*query_expr)	(struct dqlParser_Ctx_struct * ctx);

     Command*
     (*insert_expr)	(struct dqlParser_Ctx_struct * ctx);

     Command*
     (*update_expr)	(struct dqlParser_Ctx_struct * ctx);

     Command*
     (*remove_expr)	(struct dqlParser_Ctx_struct * ctx);

     dqlParser_filter_expr_return
     (*filter_expr)	(struct dqlParser_Ctx_struct * ctx);

     void
     (*boolean_expr)	(struct dqlParser_Ctx_struct * ctx);

     void
     (*boolean_term)	(struct dqlParser_Ctx_struct * ctx);

     void
     (*boolean_value)	(struct dqlParser_Ctx_struct * ctx);

     void
     (*parenthesized_boolean)	(struct dqlParser_Ctx_struct * ctx);

     void
     (*nonparentherized_boolean)	(struct dqlParser_Ctx_struct * ctx);

     void
     (*unary_expr)	(struct dqlParser_Ctx_struct * ctx);

     void
     (*exists_expr)	(struct dqlParser_Ctx_struct * ctx);

     void
     (*not_expr)	(struct dqlParser_Ctx_struct * ctx);

     void
     (*xpath_expr)	(struct dqlParser_Ctx_struct * ctx);

     void
     (*id_expr)	(struct dqlParser_Ctx_struct * ctx);

     void
     (*constant_expr)	(struct dqlParser_Ctx_struct * ctx);

     void
     (*operand_expr)	(struct dqlParser_Ctx_struct * ctx);

     void
     (*json_const)	(struct dqlParser_Ctx_struct * ctx);

     void
     (*json_array_expr)	(struct dqlParser_Ctx_struct * ctx);

     dqlParser_json_expr_return
     (*json_expr)	(struct dqlParser_Ctx_struct * ctx);

     void
     (*json_fieldname)	(struct dqlParser_Ctx_struct * ctx);
    // Delegated rules

    const char * (*getGrammarFileName)();
    void            (*reset)  (struct dqlParser_Ctx_struct * ctx);
    void	    (*free)   (struct dqlParser_Ctx_struct * ctx);
};

// Function protoypes for the constructor functions that external translation units
// such as delegators and delegates may wish to call.
//
ANTLR3_API pdqlParser dqlParserNew         (
pANTLR3_COMMON_TOKEN_STREAM
 instream);
ANTLR3_API pdqlParser dqlParserNewSSD      (
pANTLR3_COMMON_TOKEN_STREAM
 instream, pANTLR3_RECOGNIZER_SHARED_STATE state);

/** Symbolic definitions of all the tokens that the 
parser
 will work with.
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
#define ADM      4
#define ALL_FIELDS      5
#define AND      6
#define COLON      7
#define COMMA      8
#define COMMENT      9
#define DOLLAR      10
#define ESC_SEQ      11
#define EXISTS      12
#define EXPONENT      13
#define FALSE      14
#define FLOAT      15
#define FROM      16
#define HEX_DIGIT      17
#define ID      18
#define INSERT      19
#define INTO      20
#define LBRAK      21
#define LBRAN      22
#define LPAREN      23
#define NOT      24
#define NUMBER      25
#define OCTAL_ESC      26
#define OPER      27
#define OR      28
#define RBRAK      29
#define RBRAN      30
#define REMOVE      31
#define RPAREN      32
#define SELECT      33
#define SEMICOLON      34
#define STRING      35
#define TOP      36
#define TRUE      37
#define UNICODE_ESC      38
#define UPDATE      39
#define WHERE      40
#define WITH      41
#define WS      42
#define XPATH      43
#ifdef	EOF
#undef	EOF
#define	EOF	ANTLR3_TOKEN_EOF
#endif

#ifndef TOKENSOURCE
#define TOKENSOURCE(lxr) lxr->pLexer->rec->state->tokSource
#endif

/* End of token definitions for dqlParser
 * =============================================================================
 */
/** } */

#ifdef __cplusplus
}
#endif

#endif

/* END - Note:Keep extra line feed to satisfy UNIX systems */
