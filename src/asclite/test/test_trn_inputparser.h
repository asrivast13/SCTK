/*
 * ASCLITE
 * Author: Ajot Jerome, Jon Fiscus, Radde Nicolas, Laprun Chris
 *
 * This software was developed at the National Institute of Standards and Technology by 
 * employees of the Federal Government in the course of their official duties. Pursuant
 * to title 17 Section 105 of the United States Code this software is not subject to
 * copyright protection and is in the public domain. ASCLITE is an experimental system.
 * NIST assumes no responsibility whatsoever for its use by other parties, and makes no
 * guarantees, expressed or implied, about its quality, reliability, or any other
 * characteristic. We would appreciate acknowledgement if the software is used.
 *
 * THIS SOFTWARE IS PROVIDED "AS IS."  With regard to this software, NIST MAKES NO EXPRESS
 * OR IMPLIED WARRANTY AS TO ANY MATTER WHATSOEVER, INCLUDING MERCHANTABILITY,
 * OR FITNESS FOR A PARTICULAR PURPOSE.
 */

#ifndef TEST_TRN_INPUTPARSER_H
#define TEST_TRN_INPUTPARSER_H

#include "trn_inputparser.h"
#include "token.h"
#include "speech.h"
#include "segment.h"

/**
 * Test the TRN input parser.
 */
class TRNInputParserTest
{
	public:
		// class constructor
		TRNInputParserTest();
		// class destructor
		~TRNInputParserTest();
		/**
		 * Launch all the tests on the TRN input parser
		 */
		void testAll();
		/**
		 * Test the import of the Basic trn file.
		 */
		void testBasicImport();
};

#endif // TEST_TRN_INPUTPARSER_H
