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

#ifndef TEST_TOKEN_H
#define TEST_TOKEN_H

#include "stdinc.h"
#include "token.h"
#include "speechset.h"

/**
 * Test class for the Token class.
 */
class TestToken
{
	public:
		// class constructor
		TestToken();
		// class destructor
		~TestToken();
		void TestPrecNextGraph(); //test the graph structure;
		void TestText(); //test the setter for the text attribute
		void TestTime(); //test the time related methods behavior
		void TestOverlap(); // test TimedObject::OverlapWith
		/**
		 * Test if the Equals method have the good behavior.
		 */
		void TestEquals();
                void TestIsEquivalentTo();
		void TestAll(); //test every methods
};

#endif // SPEECH_H
