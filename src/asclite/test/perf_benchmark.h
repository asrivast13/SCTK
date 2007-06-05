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

#ifndef PERF_BENCHMARK_H
#define PERF_BENCHMARK_H

#include "benchmark.h" // inheriting class's header file
#include "speechset.h"

/**
 * This benchmark contain some more advanced test for the 
 * Levenshtein graph to test how it can support bigger segments.
 */
class PerfBenchmark : public Benchmark
{
	public:
		// class constructor
		PerfBenchmark();
		// class destructor
		~PerfBenchmark();
    /**
		 * Access the standard cost no index
		 */
		int GetCost(int index, string type);
		
	private:
    /**
     * Contain the collection of min cost
     * for the various cost methods
     */
    map<string, vector<int> > costs;
    
    /**
     * Methods to create a linear segment.
     */
    Segment* CreateSampleSegment(int nb, string hop);
    map<string, string> props;
};

#endif // PERF_BENCHMARK_H
