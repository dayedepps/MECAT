
/******************************************************************************
 *
 *  This file is part of canu, a software program that assembles whole-genome
 *  sequencing reads into contigs.
 *
 *  This software is based on:
 *    'Celera Assembler' (http://wgs-assembler.sourceforge.net)
 *    the 'kmer package' (http://kmer.sourceforge.net)
 *  both originally distributed by Applera Corporation under the GNU General
 *  Public License, version 2.
 *
 *  Canu branched from Celera Assembler at its revision 4587.
 *  Canu branched from the kmer project at its revision 1994.
 *
 *  This file is derived from:
 *
 *    src/AS_BAT/AS_BAT_MergeSplitJoin.H
 *
 *  Modifications by:
 *
 *    Brian P. Walenz from 2011-FEB-15 to 2013-AUG-01
 *      are Copyright 2011-2013 J. Craig Venter Institute, and
 *      are subject to the GNU General Public License version 2
 *
 *    Brian P. Walenz from 2014-DEC-19 to 2015-JUN-03
 *      are Copyright 2014-2015 Battelle National Biodefense Institute, and
 *      are subject to the BSD 3-Clause License
 *
 *  File 'README.licenses' in the root directory of this distribution contains
 *  full conditions and disclaimers for each license.
 */

#ifndef INCLUDE_AS_BAT_MERGESPLITJOIN
#define INCLUDE_AS_BAT_MERGESPLITJOIN

void
mergeSplitJoin(UnitigVector &unitigs,
               double erateGraph, double erateBubble, double erateMerge, double erateRepeat,
               const char *prefix,
               uint32 minOverlap,
               bool shatterRepeats,
               uint64 genomeSize);

void
reconstructRepeats(UnitigVector &unitigs,
                   double        erateGraph);

void
promoteToSingleton(UnitigVector &unitigs);


#endif  //  INCLUDE_AS_BAT_MERGESPLITJOIN
