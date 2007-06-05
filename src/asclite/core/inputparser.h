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

#ifndef INPUTPARSER_H
#define INPUTPARSER_H

#include "stdinc.h"
#include "token.h"
#include "segment.h"
#include "speech.h"
#include "speechset.h"

/**
 * This class represent a abstract input parser.
 * the main method is loadFile()
 */
class InputParser
{
	public:
		// class constructor
		InputParser() {	m_bOneTokenPerSegment = false; }
		// class destructor
		virtual ~InputParser() { }
		/**
		 * Load the select file and create the 
		 * Speech/Segment/Token structure with it.
		 */
		virtual SpeechSet* loadFile(string name)=0;
		
		int ParseString(string chaine);
		
		void SetOneTokenPerSegment(bool _bool) { m_bOneTokenPerSegment = _bool; }
		bool isOneTokenPerSegment() { return m_bOneTokenPerSegment; }
		
	protected:
        /**
         * Build a Token with a text input
         */
        Token* BuildToken(int start, int dur, string text_to_parse, Segment* parent);
		
		bool m_bOneTokenPerSegment;
};

#endif // INPUTPARSER_H
