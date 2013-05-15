/** \file
 *  This C header file was generated by $ANTLR version 3.4
 *
 *     -  From the grammar source file : /home/cross/workspace/djondb_tx/db/grammars/dql.g
 *     -                            On : 2013-05-14 21:02:53
 *     -                 for the lexer : dqlLexerLexer
 *
 * Editing it, at least manually, is not wise.
 *
 * C language generator and runtime by Jim Idle, jimi|hereisanat|idle|dotgoeshere|ws.
 *
 *
 * The lexer 
dqlLexer

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
 * a parser context typedef pdqlLexer, which is returned from a call to dqlLexerNew().
 *
 * As this is a generated lexer, it is unlikely you will call it 'manually'. However
 * the methods are provided anyway.
 *
 * The methods in pdqlLexer are  as follows:
 *
 *  - 
 void
      pdqlLexer->NUMBER(pdqlLexer)
 *  - 
 void
      pdqlLexer->LETTER(pdqlLexer)
 *  - 
 void
      pdqlLexer->ID(pdqlLexer)
 *  - 
 void
      pdqlLexer->DOLLAR(pdqlLexer)
 *  - 
 void
      pdqlLexer->ADM(pdqlLexer)
 *  - 
 void
      pdqlLexer->XPATH(pdqlLexer)
 *  - 
 void
      pdqlLexer->SELECT(pdqlLexer)
 *  - 
 void
      pdqlLexer->INSERT(pdqlLexer)
 *  - 
 void
      pdqlLexer->UPDATE(pdqlLexer)
 *  - 
 void
      pdqlLexer->REMOVE(pdqlLexer)
 *  - 
 void
      pdqlLexer->FROM(pdqlLexer)
 *  - 
 void
      pdqlLexer->WHERE(pdqlLexer)
 *  - 
 void
      pdqlLexer->INTO(pdqlLexer)
 *  - 
 void
      pdqlLexer->WITH(pdqlLexer)
 *  - 
 void
      pdqlLexer->NOT(pdqlLexer)
 *  - 
 void
      pdqlLexer->OPER(pdqlLexer)
 *  - 
 void
      pdqlLexer->OR(pdqlLexer)
 *  - 
 void
      pdqlLexer->AND(pdqlLexer)
 *  - 
 void
      pdqlLexer->TOP(pdqlLexer)
 *  - 
 void
      pdqlLexer->DB_NS(pdqlLexer)
 *  - 
 void
      pdqlLexer->ALL_FIELDS(pdqlLexer)
 *  - 
 void
      pdqlLexer->FLOAT(pdqlLexer)
 *  - 
 void
      pdqlLexer->COMMENT(pdqlLexer)
 *  - 
 void
      pdqlLexer->WS(pdqlLexer)
 *  - 
 void
      pdqlLexer->STRING(pdqlLexer)
 *  - 
 void
      pdqlLexer->EXPONENT(pdqlLexer)
 *  - 
 void
      pdqlLexer->HEX_DIGIT(pdqlLexer)
 *  - 
 void
      pdqlLexer->ESC_SEQ(pdqlLexer)
 *  - 
 void
      pdqlLexer->OCTAL_ESC(pdqlLexer)
 *  - 
 void
      pdqlLexer->UNICODE_ESC(pdqlLexer)
 *  - 
 void
      pdqlLexer->COMMA(pdqlLexer)
 *  - 
 void
      pdqlLexer->LPAREN(pdqlLexer)
 *  - 
 void
      pdqlLexer->RPAREN(pdqlLexer)
 *  - 
 void
      pdqlLexer->LBRAN(pdqlLexer)
 *  - 
 void
      pdqlLexer->RBRAN(pdqlLexer)
 *  - 
 void
      pdqlLexer->LBRAK(pdqlLexer)
 *  - 
 void
      pdqlLexer->RBRAK(pdqlLexer)
 *  - 
 void
      pdqlLexer->COLON(pdqlLexer)
 *  - 
 void
      pdqlLexer->SEMICOLON(pdqlLexer)
 *  - 
 void
      pdqlLexer->Tokens(pdqlLexer)
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

#ifndef	_dqlLexer_H
#define _dqlLexer_H
/* =============================================================================
 * Standard antlr3 C runtime definitions
 */
#include    <antlr3.h>

/* End of standard antlr 3 runtime definitions
 * =============================================================================
 */

#ifdef __cplusplus
extern "C" {
#endif

// Forward declare the context typedef so that we can use it before it is
// properly defined. Delegators and delegates (from import statements) are
// interdependent and their context structures contain pointers to each other
// C only allows such things to be declared if you pre-declare the typedef.
//
typedef struct dqlLexer_Ctx_struct dqlLexer, * pdqlLexer;



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

/** Context tracking structure for 
dqlLexer

 */
struct dqlLexer_Ctx_struct
{
    /** Built in ANTLR3 context tracker contains all the generic elements
     *  required for context tracking.
     */
    pANTLR3_LEXER    pLexer;

     void
     (*mNUMBER)	(struct dqlLexer_Ctx_struct * ctx);

     void
     (*mLETTER)	(struct dqlLexer_Ctx_struct * ctx);

     void
     (*mID)	(struct dqlLexer_Ctx_struct * ctx);

     void
     (*mDOLLAR)	(struct dqlLexer_Ctx_struct * ctx);

     void
     (*mADM)	(struct dqlLexer_Ctx_struct * ctx);

     void
     (*mXPATH)	(struct dqlLexer_Ctx_struct * ctx);

     void
     (*mSELECT)	(struct dqlLexer_Ctx_struct * ctx);

     void
     (*mINSERT)	(struct dqlLexer_Ctx_struct * ctx);

     void
     (*mUPDATE)	(struct dqlLexer_Ctx_struct * ctx);

     void
     (*mREMOVE)	(struct dqlLexer_Ctx_struct * ctx);

     void
     (*mFROM)	(struct dqlLexer_Ctx_struct * ctx);

     void
     (*mWHERE)	(struct dqlLexer_Ctx_struct * ctx);

     void
     (*mINTO)	(struct dqlLexer_Ctx_struct * ctx);

     void
     (*mWITH)	(struct dqlLexer_Ctx_struct * ctx);

     void
     (*mNOT)	(struct dqlLexer_Ctx_struct * ctx);

     void
     (*mOPER)	(struct dqlLexer_Ctx_struct * ctx);

     void
     (*mOR)	(struct dqlLexer_Ctx_struct * ctx);

     void
     (*mAND)	(struct dqlLexer_Ctx_struct * ctx);

     void
     (*mTOP)	(struct dqlLexer_Ctx_struct * ctx);

     void
     (*mDB_NS)	(struct dqlLexer_Ctx_struct * ctx);

     void
     (*mALL_FIELDS)	(struct dqlLexer_Ctx_struct * ctx);

     void
     (*mFLOAT)	(struct dqlLexer_Ctx_struct * ctx);

     void
     (*mCOMMENT)	(struct dqlLexer_Ctx_struct * ctx);

     void
     (*mWS)	(struct dqlLexer_Ctx_struct * ctx);

     void
     (*mSTRING)	(struct dqlLexer_Ctx_struct * ctx);

     void
     (*mEXPONENT)	(struct dqlLexer_Ctx_struct * ctx);

     void
     (*mHEX_DIGIT)	(struct dqlLexer_Ctx_struct * ctx);

     void
     (*mESC_SEQ)	(struct dqlLexer_Ctx_struct * ctx);

     void
     (*mOCTAL_ESC)	(struct dqlLexer_Ctx_struct * ctx);

     void
     (*mUNICODE_ESC)	(struct dqlLexer_Ctx_struct * ctx);

     void
     (*mCOMMA)	(struct dqlLexer_Ctx_struct * ctx);

     void
     (*mLPAREN)	(struct dqlLexer_Ctx_struct * ctx);

     void
     (*mRPAREN)	(struct dqlLexer_Ctx_struct * ctx);

     void
     (*mLBRAN)	(struct dqlLexer_Ctx_struct * ctx);

     void
     (*mRBRAN)	(struct dqlLexer_Ctx_struct * ctx);

     void
     (*mLBRAK)	(struct dqlLexer_Ctx_struct * ctx);

     void
     (*mRBRAK)	(struct dqlLexer_Ctx_struct * ctx);

     void
     (*mCOLON)	(struct dqlLexer_Ctx_struct * ctx);

     void
     (*mSEMICOLON)	(struct dqlLexer_Ctx_struct * ctx);

     void
     (*mTokens)	(struct dqlLexer_Ctx_struct * ctx);
    const char * (*getGrammarFileName)();
    void            (*reset)  (struct dqlLexer_Ctx_struct * ctx);
    void	    (*free)   (struct dqlLexer_Ctx_struct * ctx);
};

// Function protoypes for the constructor functions that external translation units
// such as delegators and delegates may wish to call.
//
ANTLR3_API pdqlLexer dqlLexerNew         (
pANTLR3_INPUT_STREAM
 instream);
ANTLR3_API pdqlLexer dqlLexerNewSSD      (
pANTLR3_INPUT_STREAM
 instream, pANTLR3_RECOGNIZER_SHARED_STATE state);

/** Symbolic definitions of all the tokens that the 
lexer
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
#define DB_NS      10
#define DOLLAR      11
#define ESC_SEQ      12
#define EXPONENT      13
#define FLOAT      14
#define FROM      15
#define HEX_DIGIT      16
#define ID      17
#define INSERT      18
#define INTO      19
#define LBRAK      20
#define LBRAN      21
#define LETTER      22
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
#define UNICODE_ESC      37
#define UPDATE      38
#define WHERE      39
#define WITH      40
#define WS      41
#define XPATH      42
#ifdef	EOF
#undef	EOF
#define	EOF	ANTLR3_TOKEN_EOF
#endif

#ifndef TOKENSOURCE
#define TOKENSOURCE(lxr) lxr->pLexer->rec->state->tokSource
#endif

/* End of token definitions for dqlLexer
 * =============================================================================
 */
/** } */

#ifdef __cplusplus
}
#endif

#endif

/* END - Note:Keep extra line feed to satisfy UNIX systems */
